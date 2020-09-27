#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
    std::cout << YELLOW << "[WEAPON]" << GREEN << "[CREATE]\n" << RESET;
}
Weapon::~Weapon()
{
    std::cout << YELLOW << "[WEAPON]" << RED << "[DESTROY]\n" << RESET;
}

std::string const &Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
