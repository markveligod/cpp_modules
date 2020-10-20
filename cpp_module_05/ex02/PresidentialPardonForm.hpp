#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		PresidentialPardonForm();

		std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		void execute(Bureaucrat const & executor) const;
};
