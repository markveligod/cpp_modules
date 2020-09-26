#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
    std::cout << "[Constructor]" << "[OK]\n";
}

Zombie::~Zombie()
{
    std::cout << "[Destructor]" << "[OK]\n";
}

void Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss...\n";
}
