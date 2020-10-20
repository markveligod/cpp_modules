#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	this->_tree = "          .     .  .      +     .      .          .\n" \
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
		".. .. ..................O000O........................ ...... ...\n";
	std::cout << YELLOW << "[Child]:" << RESET << " from " << GREEN << "<" << this << "> " << RESET << "created form with target: " << GREEN << this->_target << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other)
{
	this->_target = other._target;
	this->_tree = other._tree;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << YELLOW << "[Child]: " << RESET << "from " << RED << "<" << this << "> " << RESET << "destroy form with target: " << RED << this->_target << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return(*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream out_file;
	std::string name_file = (this->_target + "_shrubbery");

	Form::execute(executor);
	out_file.open(&name_file[0], std::ios::trunc);
	if (!out_file.is_open())
		throw ShrubberyCreationForm::FileOpenException();
	out_file << this->_tree;
	out_file.close();
	std::cout << YELLOW << "[ShrubberyCreationForm]: " << GREEN << "<" << executor.getName() << ">" << RESET << " execute the form with target: " << GREEN << "<" << this->_target << ">" << RESET << std::endl;
	std::cout << CYAN << "\t!check file: " << GREEN << name_file << RESET << std::endl;
}
