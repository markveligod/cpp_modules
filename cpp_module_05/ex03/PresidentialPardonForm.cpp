#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << YELLOW << "[Child]:" << RESET << " from " << GREEN << "<" << this << "> " << RESET << "created form with target: " << GREEN << this->_target << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): Form(other)
{
	this->_target = other._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELLOW << "[Child]: " << RESET << "from " << RED << "<" << this << "> " << RESET << "destroy form with target: " << RED << this->_target << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << YELLOW << "<" << this->_target << ">" << RESET << " has been pardoned by Zafod Beeblebrox" << std::endl;
}