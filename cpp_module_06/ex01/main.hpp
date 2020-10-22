#pragma once

# include <iostream>
# include <cstdlib>

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

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);

Data *deserialize(void *raw);
