#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
    this->_hp = 80;
    this->_type = "RadScorpion";
    std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const & base)
{
    this->_hp = base._hp;
    this->_type = base._type;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
}

RadScorpion &RadScorpion::operator=(RadScorpion const & base)
{
    this->_hp = base._hp;
    this->_type = base._type;
    return (*this);
}

void RadScorpion::takeDamage(int amount)
{
    Enemy::takeDamage(amount);
}