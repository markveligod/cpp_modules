#include "HumanB.hpp"

HumanB::HumanB(std::string const &name): name(name), gun(NULL)
{
    std::cout << YELLOW << "[HumanB]" << GREEN << "[CREATE]\n" << RESET;
}

HumanB::~HumanB()
{
    std::cout << YELLOW << "[HumanB]" << RED << "[DESTROY]\n" << RESET;
}

void HumanB::setWeapon(Weapon &gun)
{
    this->gun = &gun;
}

void HumanB::attack()
{
    if (this->gun)
        std::cout << this->name << " attacks with his " << this->gun->getType() << std::endl;
    else
        std::cout << RED << "[Error]" << RESET << "can't attack because he has no Weapon !\n";
}
