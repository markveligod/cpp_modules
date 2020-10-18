#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm: public Form
{
	private:
		RobotomyRequestForm();

		std::string _target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

		void execute(Bureaucrat const & executor) const;
};
