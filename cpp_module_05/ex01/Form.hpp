#pragma once

/*
**==========================
**		Includes
**==========================
*/
class Form;
# include "Bureaucrat.hpp"

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

class Form
{
	private:
		Form();

		std::string _name;
		bool _sign;
		int _num_sign;
		int _num_execute;
	public:
		Form(std::string name, int sign, int execute);
		Form(Form const &other);
		~Form();

		Form &operator=(Form const &other);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{ 
					return ("Form::GradeTooHighException");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form::GradeTooLowException");
				}
		};

		std::string getName() const;
		int getNumSign() const;
		int getNumExecute() const;
		bool getSigned(void) const;

		void beSigned(Bureaucrat const &base);
};

std::ostream &operator<<(std::ostream &os, Form const &base);