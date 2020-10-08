#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
    this->_name = "Plasma Rifle";
    this->_damage = 21;
    this->_apcost = 5;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & base)
{
    this->_name = base._name;
    this->_damage = base._damage;
    this->_apcost = base._apcost;
}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const & base)
{
	this->_name = base._name;
	this->_apcost = base._apcost;
	this->_damage = base._damage;
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouu *" << std::endl;
}
