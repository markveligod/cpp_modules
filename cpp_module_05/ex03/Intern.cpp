#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern::~Intern()
{}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return(*this);
}

int Intern::get_rate(std::string name, std::string *std_rate)
{
	std::string temp;
	int rate = 0;
	int curr;
	std::istringstream iss(name);

	while (iss)
	{
		iss >> temp;
		curr = 0;
		if (temp.empty())
			break;
		for (int i = 0; i < 4; i++)
		{
			if (temp == std_rate[i])
				curr = 1;
		}
		if (rate)
			if (curr == 0)
				throw Intern::UnknownForm();
		rate += curr;
		temp.clear();
	}
	if (rate)
		return (1);
	return (0);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string std_shrub_rate[4] = {"Shrubbery", "Creation", "shrubbery", "creation"};
	std::string std_robot_rate[4] = {"Robotomy", "Request", "robotomy", "request"};
	std::string std_pres_rate[4] = {"Presidential", "Pardon", "presidential", "pardon"};
	int rate[3] = {0, 0, 0};
	int curr = -1;
	Form *ret;

	rate[0] = this->get_rate(name, std_shrub_rate);
	rate[1] = this->get_rate(name, std_robot_rate);
	rate[2] = this->get_rate(name, std_pres_rate);

	for (int i = 0; i < 3; i++)
		if (rate[i] == 1 && curr == -1)
			curr = i;
	switch(curr)
	{
		case 0:
			ret = new ShrubberyCreationForm(target);
			break;
		case 1:
			ret = new RobotomyRequestForm(target);
			break;
		case 2:
			ret = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::UnknownForm();
			break;
	}
	std::cout << CYAN << "\tIntern creates " << GREEN << "<" << ret->getName() << ">" << RESET << std::endl;
	return (ret);
}