#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << YELLOW << "[Child]:" << RESET << " from " << GREEN << "<" << this << "> " << RESET << "created form with target: " << GREEN << this->_target << RESET << std::endl;
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): Form(other)
{
	this->_target = other._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELLOW << "[Child]: " << RESET << "from " << RED << "<" << this << "> " << RESET << "destroy form with target: " << RED << this->_target << RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << CYAN << "* ZZZZZZZ zzzzzzzzzzz ZZZZZZZZZZZ AAAAAAAAAAAAAAAAAAAAAAAAAAA !(*_*)! *" << RESET << std::endl;
	if ((rand() % 100) > 50)
		std::cout << YELLOW << "\t<" << this->_target << ">" << RESET << " has been robotomized " << GREEN << "successfully" << RESET << std::endl;
	else
		std::cout << YELLOW << "\t<" << this->_target << ">" << RESET << " robotomization is a " << RED << "failure" << RESET << std::endl;
}