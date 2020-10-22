#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <sstream>
#include <cctype>
#include <iomanip>
#include <limits>

/*
**==========================
**         Colors
**==========================
*/
# define RED "\033[1;31m"
# define RESET "\033[0m"


class Convert
{
	private:
		Convert();

		char num_char;
		int num_int;
		float num_float;
		double num_double;

		std::string std_char;
		std::string std_int;
		std::string std_float;
		std::string std_double;

		std::string sign;
	public:
		Convert(char *av);
		Convert(Convert const &other);
		~Convert();

		Convert &operator=(Convert const &other);

		std::string getChar() const;
		std::string getInt() const;
		std::string getFloat() const;
		std::string getDouble() const;



		class UnknownString: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Convert const &base);
