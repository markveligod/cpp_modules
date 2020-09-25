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

class Pony
{
    private:
        std::string _name;
        std::string _color;
        std::string _weight;

    public:
    Pony(std::string name, std::string color, std::string weight);
    ~Pony();
    void status();
};
