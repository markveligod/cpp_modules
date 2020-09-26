#pragma once

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string _type;
        std::string _name;
    public:
        Zombie(std::string name, std::string type);
        ~Zombie();
        void announce();
        
};