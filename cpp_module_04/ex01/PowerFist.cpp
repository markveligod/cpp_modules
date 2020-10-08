#include "PowerFist.hpp"

PowerFist::PowerFist()
{
    this->_name = "Power Fist";
    this->_damage = 50;
    this->_apcost = 8;
}

PowerFist::PowerFist(PowerFist const & base)
{
    this->_name = base._name;
    this->_damage = base._damage;
    this->_apcost = base._apcost;
}

PowerFist::~PowerFist()
{}

PowerFist &PowerFist::operator=(PowerFist const & base)
{
	this->_name = base._name;
	this->_apcost = base._apcost;
	this->_damage = base._damage;
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
