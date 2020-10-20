#include "Form.hpp"

Form::Form()
{}

Form::Form(std::string name, int sign, int execute)
{
	this->_name = name;
	this->_sign = false;
	this->_num_sign = sign;
	this->_num_execute = execute;
	if (this->_num_sign < 1 || this->_num_execute < 1)
		throw Form::GradeTooHighException();
	else if (this->_num_sign > 150 || this->_num_execute > 150)
		throw Form::GradeTooLowException();
	std::cout << YELLOW << "[" << this << "]: " << GREEN << "CREATE" << RESET << std::endl;
	std::cout << CYAN;
	std::cout << "(\\ " << std::endl;
	std::cout << "\\'\\ " << std::endl;
	std::cout << " \'\\     __________  " << std::endl;
	std::cout << " / '|   ()_________)" << std::endl;
	std::cout << " \\ '/    \\ ~~~~~~~~ \\" << std::endl;
	std::cout << "   \\       \\ ~~~~~~   \\" << std::endl;
	std::cout << "   ==).      \\__________\\" << std::endl;
	std::cout << "  (__)       ()__________)" << std::endl;
	std::cout << RESET << std::endl;	
}

Form::Form(Form const &other)
{
	this->_name = other._name;
	this->_sign = false;
	this->_num_sign = other._num_sign;
	this->_num_execute = other._num_execute;
}

Form::~Form()
{
	std::cout << YELLOW << "[" << this << "]: " << RED << "DESTROY" << RESET << std::endl;
}

Form &Form::operator=(Form const &other)
{
	this->_name = other._name;
	this->_sign = false;
	this->_num_sign = other._num_sign;
	this->_num_execute = other._num_execute;
	return(*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getNumSign() const
{
	return (this->_num_sign);
}

int Form::getNumExecute() const
{
	return (this->_num_execute);
}

bool Form::getSigned(void) const
{
	return (this->_sign);
}

void Form::beSigned(Bureaucrat const &base)
{
	if (this->_sign)
		return ;
	if (base.getGrade() > this->_num_sign)
		throw Form::GradeTooLowException();
	this->_sign = true;
	std::cout << YELLOW << "[" << this->_name << "]: " << RESET << "signed by a " << GREEN << "<" << base.getName() << ">" << RESET << std::endl;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_num_execute)
		throw Form::GradeTooLowException();
	if (!this->_sign)
		throw Form::UnsignedFormException();
}

std::ostream &operator<<(std::ostream &os, Form const &base)
{
	os << YELLOW << "[" << base.getName() << "]: " << RESET << "Sign: " << ((base.getSigned()) ? GREEN : RED) << "<" << ((base.getSigned()) ? "✓" : "×") << "> " << RESET;
	return (os);
}
