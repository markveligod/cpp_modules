#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const & name)
{
    this->_name = name;
    this->_ap = 40;
    this->_eq = NULL;
}

Character::Character(Character const & base)
{
    this->_name = base._name;
    this->_ap = base._ap;
    this->_eq = base._eq;
}

Character::~Character()
{}

Character &Character::operator=(Character const & base)
{
    this->_name = base._name;
    this->_ap = base._ap;
    this->_eq = base._eq;
    return (*this);
}

void Character::recoverAP()
{
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}

void Character::equip(AWeapon *base)
{
    this->_eq = base;
}

void Character::attack(Enemy *base)
{
    if (!base || !this->_eq)
        return ;
    if (this->_ap < this->_eq->getAPCost())
        return ;
    this->_ap -= this->_eq->getAPCost();
    std::cout << this->_name << " attacks " << base->getType() << " with a " << this->_eq->getName() << std::endl;
    this->_eq->attack();
    base->takeDamage(this->_eq->getDamage());
    if ((base->getHP()) == 0)
        delete base;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

int Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon *Character::getWeapon(void) const
{
	return (this->_eq);
}

std::ostream &operator<<(std::ostream &out, Character const &base)
{
    out << base.getName() << " has " << base.getAP();
    if ((base.getWeapon()) == NULL)
        out << " AP and is unarmed\n";
    else
        out << " AP and wields a " << base.getWeapon()->getName() << "\n";
    return (out);    
}