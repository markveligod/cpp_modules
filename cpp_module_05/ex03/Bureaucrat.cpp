#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	this->_name = name;
	this->_grade = grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << YELLOW << "[" << this << "]: " << GREEN << "LIVE" << RESET << std::endl;
	std::cout << CYAN;
	std::cout << "   .------\\ /------." << std::endl;
	std::cout << "   |       -       |" << std::endl;
	std::cout << "   |               |" << std::endl;
	std::cout << "   |               |" << std::endl;
	std::cout << "   |               |" << std::endl;
	std::cout << "_______________________" << std::endl;
	std::cout << "===========.===========" << std::endl;
	std::cout << "  / ~~~~~     ~~~~~ \\" << std::endl;
	std::cout << " /|     |     |     |\\" << std::endl;
	std::cout << " W   ---  / \\  ---   W" << std::endl;
	std::cout << " \\.      |o o|      ./" << std::endl;
	std::cout << "  |                 |" << std::endl;
	std::cout << "  \\    #########    /" << std::endl;
	std::cout << "   \\  ## ----- ##  /" << std::endl;
	std::cout << "    \\##         ##/" << std::endl;
	std::cout << "     \\_____v_____/" << std::endl;
	std::cout << RESET << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	this->_name = other._name;
	this->_grade = other._grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << YELLOW << "[" << this << "]: " << RED << "DEAD" << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_name = other._name;
	this->_grade = other._grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return(*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::inc_grade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << YELLOW << "<" << this->_name << ">" << RESET << " has been upgraded to a grade " << GREEN << "<" << this->_grade << ">." << RESET << std::endl;
}

void Bureaucrat::dec_grade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << YELLOW << "<" << this->_name << ">" << RESET << " has been lowered to a grade " << RED << "<" << this->_grade << ">." << RESET << std::endl;
}

void Bureaucrat::signForm(Form &base) const
{
	if (base.getSigned())
	{
		std::cout << YELLOW << "[" << this->_name << "]: " << RESET << "cannot sign " << YELLOW << "<" << base.getName() << ">" << RESET << " because the form is already signed!" << std::endl;
	}
	else if (this->_grade > base.getNumSign())
	{
		std::cout << YELLOW << "[" << this->_name << "]: " << RESET << "cannot sign " << YELLOW << "<" << base.getName() << ">" << RESET << " because lower-ranking " << YELLOW << "<" << this->_name << ">" << RESET << std::endl;
	}
	else
	{
		base.beSigned(*this);
	}
}

void Bureaucrat::executeForm(Form const &base) const
{
	if (!base.getSigned())
	{
		std::cout << YELLOW << "[" << this->_name << "]: " << RESET << "cannot execute " << YELLOW << "<" << base.getName() << ">" << RESET << " because the form is unsigned!" << std::endl;
	}
	else if (base.getNumExecute() < this->_grade)
	{
		std::cout << YELLOW << "[" << this->_name << "]: " << RESET << "cannot execute " << YELLOW << "<" << base.getName() << ">" << RESET << " because lower-ranking " << YELLOW << "<" << this->_name << ">" << RESET << std::endl;
	}
	else
	{
		base.execute(*this);
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &base)
{
	os << YELLOW << "<" << base.getName() << ">" << RESET << ", bureaucrat grade " << CYAN << "<" << base.getGrade() << ">." << RESET;
	return (os);
}
