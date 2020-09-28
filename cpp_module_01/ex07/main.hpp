#pragma once

# include <iostream>
# include <fstream> //ifstream ofstream
# include <sstream> //stringstream

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
**         Errors
**==========================
*/

# define ERR_PATH 1
# define ERR_SRC 2
# define ERR_DST 3
# define ERR_FILE 4
