#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const & type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::Enemy(Enemy const & base)
{
	this->_hp = base._hp;
	this->_type = base._type;
}

Enemy &Enemy::operator=(Enemy const & base)
{
	this->_hp = base._hp;
	this->_type = base._type;
	return (*this);
}

Enemy::~Enemy()
{}

std::string const &Enemy::getType(void) const
{
	return (this->_type);
}
int Enemy::getHP() const
{
    return (this->_hp);
}

void Enemy::takeDamage(int amount)
{
	if (amount < 0)
		return ;
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
}