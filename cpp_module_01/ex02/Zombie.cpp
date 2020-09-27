#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
    std::cout << YELLOW << "[" << this->_name << "]" << GREEN << "[LIVE]\n" << RESET;
}

Zombie::~Zombie()
{
    std::cout << YELLOW << "[" << this->_name << "]" << RED << "[DEAD]\n" << RESET;
}

void Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss...\n";
}
