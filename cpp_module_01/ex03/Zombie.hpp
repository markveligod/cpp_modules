#pragma once

# include <iostream>
# include <string>
# include <random>

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

class Zombie
{
    private:
        std::string _name;
        std::string _type;
    public:
        Zombie();
        ~Zombie();
        void setZombie(std::string name, std::string type);
        void announce();
        std::string getName();
        
};