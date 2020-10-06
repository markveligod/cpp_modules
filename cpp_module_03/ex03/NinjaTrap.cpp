#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
    this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	this->level = 1;
    this->_name = name;
    std::cout << YELLOW << "[" << this->_name << "]" << GREEN << "[CREATE]" << RESET << "- " << this->level << " level\n";
    std::cout << CYAN;
    std::cout << "                               _.-'" << std::endl;
    std::cout << "                           _.-'" << std::endl;
    std::cout << "           _____________.-'________________" << std::endl;
    std::cout << "          /         _.-' O                /|" << std::endl;
    std::cout << "         /  i====_======O      __________/ /" << std::endl;
    std::cout << "        /  / _.-'      O      /     _   /|/" << std::endl;
    std::cout << "       /  / | p       o      /     (   / /" << std::endl;
    std::cout << "      /  /           O      /_________/ /" << std::endl;
    std::cout << "     /  L===========O                /|/" << std::endl;
    std::cout << "    /______________O________________/ /" << std::endl;
    std::cout << "   |________________________________|/" << std::endl;
    std::cout << std::endl << RESET;
    srand(time(nullptr));
}

NinjaTrap::~NinjaTrap()
{
    std::cout << YELLOW << "[" << this->_name << "]" << RED << "[DESTROY]\n" << RESET;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << YELLOW << "[" << this->_name << "]:" << RESET << " tries to tickle " << YELLOW << "<" << trap.getName() << ">" << RESET << " but realize he has no feets.\n";
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (this->energy_points >= 20)
	{
		this->energy_points -= 20;
		std::cout << YELLOW << "[" << this->_name << "]:" << RESET << " try to cut trough " << YELLOW << "<" << trap.getName() << ">" << RESET << " and damage him for " << RED << "<" << this->ranged_attack_damage << ">" << RESET << " !\n";
		trap.takeDamage(this->ranged_attack_damage);
        std::cout << YELLOW << "[" << trap.getName() << "]:" << RESET << " omg!!! my hit point " << GREEN << "<" << trap.getHit() << ">\n" << RESET;
	}
	else
		std::cout << YELLOW << "[" << this->_name << "]:" << RESET << " is too tired.\n";
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (this->energy_points >= 60)
	{
		this->energy_points -= 60;
		std::cout << YELLOW << "[" << this->_name << "]:" << RESET << " sense the ClapTrap " << YELLOW << "<" << trap.getName() << ">" << RESET << " but can't see it.\n";
	}
	else
	{
		std::cout << YELLOW << "[" << this->_name << "]:" << RESET << " finally see the ClapTrap " << YELLOW << "<" << trap.getName() << ">" << RESET << " before falling on the ground.\n";
		this->takeDamage(this->hit_points + this->armor_damage_reduction);
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if ((rand() % 100) > 50)
	{
		std::cout << YELLOW << "[" << this->_name << "]:" << RESET << " throw Shuriken at " << YELLOW << "<" << trap.getName() << ">" << RESET << " and damage him for " << RED << "<" << this->ranged_attack_damage << ">" << RESET << " !\n";
	}
	else
	{
		std::cout << YELLOW << "[" << this->_name << "]:" << RESET << " throw Shuriken at " << YELLOW << "<" << trap.getName() << ">" << RESET << " but misses.\n";
	}
}
