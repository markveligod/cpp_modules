#pragma once

/*
**==========================
**		Includes
**==========================
*/
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <sstream>

class Intern
{
	private:

	public:
		Intern();
		Intern(Intern const &other);
		~Intern();

		Intern &operator=(Intern const &other);

		Form *makeForm(std::string name, std::string target);
		int get_rate(std::string name, std::string *std_rate);

		class UnknownForm: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Intern::UnknownForm");
				}
		};
};
