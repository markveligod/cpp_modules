#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		ShrubberyCreationForm();

		std::string _target;
		std::string _tree;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		class FileOpenException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("ShrubberyCreationForm::FileOpenException");
				}
		};

		void execute(Bureaucrat const & executor) const;
};
