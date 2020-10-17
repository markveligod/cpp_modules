#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	this->_tree = {
		"          .     .  .      +     .      .          .\n" \
		"     .       .      .     #       .           .\n" \
		"        .      .         ###            .      .      .\n" \
		"      .      .   \"#:. .:##\"##:. .:#\"  .      .\n" \
		"          .      . \"####\"###\"####\"  .\n" \
		".     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n" \
		"  .             \"#########\"#########\"        .        .\n" \
		"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n" \
		"     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n" \
		"                .\"##\"#####\"#####\"##\"           .      .\n" \
		"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n" \
		"      .     \"#######\"##\"#####\"##\"#######\"      .     .\n" \
		"    .    .     \"#####\"\"#######\"\"#####\"    .      .\n" \
		"            .     \"      000      \"    .     .\n" \
		"       .         .   .   000     .        .       .\n" \
		".. .. ..................O000O........................ ...... ...\n" \
		};
	std::cout << YELLOW << "[Child]: " << GREEN << "<" << this << "> " << RESET << "created form with target: " << GREEN << this->_target << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other)
{
	this->_target = other._target;
	this->_tree = other._tree;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << YELLOW << "[Child]: " << RED << "<" << this << "> " << RESET << "destroy form with target: " << RED << this->_target << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return(*this);
}

