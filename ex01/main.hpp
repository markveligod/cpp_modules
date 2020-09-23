#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include "Data.Class.hpp"

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


/*
**==========================
**         Utils
**==========================
*/

void start_display();
void add_data(std::string name, std::string *result);
void show_header();
int  print_data(std::string str, int index);
void pars_data(std::string name, std::string str, int index);
void show_data(std::string f_name, std::string l_name, std::string nick, int *count);
int  ft_atoi(const char *str);
