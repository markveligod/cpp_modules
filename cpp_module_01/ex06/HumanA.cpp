#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &gun):name(name), gun(gun)
{
    std::cout << YELLOW << "[HumanA]" << GREEN << "[CREATE]\n" << RESET;
}

HumanA::~HumanA()
{
    std::cout << YELLOW << "[HumanA]" << RED << "[DESTROY]\n" << RESET;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->gun.getType() << std::endl;
}
