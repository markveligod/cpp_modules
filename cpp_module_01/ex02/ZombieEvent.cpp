#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "";
    std::cout << YELLOW << "[ZombieEvent]" << GREEN << "[START]\n" << RESET;
}

ZombieEvent::~ZombieEvent()
{
    std::cout << YELLOW << "[ZombieEvent]" << RED << "[END]\n" << RESET;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, this->_type));
}
