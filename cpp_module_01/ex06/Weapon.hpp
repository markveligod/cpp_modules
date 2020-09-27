#pragma once

#include <iostream>
#include <string>

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

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string const &getType();
        void setType(std::string type);
};