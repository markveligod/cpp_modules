#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
    this->_hp = 170;
    this->_type = "Super Mutant";
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(SuperMutant const & base)
{
    this->_hp = base._hp;
    this->_type = base._type;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}

SuperMutant &SuperMutant::operator=(SuperMutant const & base)
{
    this->_hp = base._hp;
    this->_type = base._type;
    return (*this);
}

void SuperMutant::takeDamage(int amount)
{
    Enemy::takeDamage(amount - 3);
}