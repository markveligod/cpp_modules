#pragma once

/*
**==========================
**		Includes
**==========================
*/
class Bureaucrat;
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

/*
**==========================
**         Colors
**==========================
*/
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

class Bureaucrat
{
	private:
		Bureaucrat();

		std::string	_name;
		int			_grade;
	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &other);

		std::string	getName() const;
		int			getGrade() const;
		void		inc_grade();
		void		dec_grade();

		void signForm(Form &base) const;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{ 
					return ("Bureaucrat::GradeTooHighException");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Bureaucrat::GradeTooLowException");
				}
		};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &base);
