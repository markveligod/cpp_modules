#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage;
}

AWeapon::AWeapon(AWeapon const & base)
{
    this->_name = base._name;
    this->_apcost = base._apcost;
    this->_damage = base._damage;
}

AWeapon &AWeapon::operator=(AWeapon const & base)
{
	this->_name = base._name;
	this->_apcost = base._apcost;
	this->_damage = base._damage;
	return (*this);
}

AWeapon::~AWeapon()
{}

std::string const &AWeapon::getName(void) const
{
	return (this->_name);
}

int AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int AWeapon::getDamage(void) const
{
	return (this->_damage);
}
