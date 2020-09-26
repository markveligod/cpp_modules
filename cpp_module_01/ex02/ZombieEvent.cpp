#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "";
    std::cout << "[Constructor]" << "[OK]\n";
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "[Destructor]" << "[OK]\n";
}

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, this->_type));
}
