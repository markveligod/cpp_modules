#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << YELLOW << "[PARENT]" << GREEN << "[LIVE]\n" << RESET;
    this->_name = "PARENT";
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    std::cout << YELLOW << "[" << this->_name << "]" << GREEN << "[LIVE]\n" << RESET;
}

ClapTrap::~ClapTrap()
{
    std::cout << YELLOW << "[ClapTrap]" << RED << "[DEAD]\n" << RESET;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << YELLOW << "[" << this->_name << "]" << RESET << " attacks " << YELLOW << "[" << target << "]" << RESET << " at range, causing " << RED << "[" << this->ranged_attack_damage << "]" << RESET << " points of damage!\n";
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << YELLOW << "[" << this->_name << "]" << RESET << " attacks " << YELLOW << "[" << target << "]" << RESET << " at melee, causing " << RED << "[" << this->melee_attack_damage << "]" << RESET << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int temp;

    temp = amount - this->armor_damage_reduction;
    if (temp < 0)
        temp = 0;
    this->hit_points -= temp;
    if (this->hit_points < 0)
    {
        temp += this->hit_points; 
        this->hit_points = 0;
    }
    std::cout << YELLOW << "[" << this->_name << "]" << RESET << " take " << RED << "[" << temp << "]" << RESET << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int temp;

    temp = amount;
    this->hit_points += temp;
    if (this->hit_points > this->max_hit_points)
    {
        temp -= (this->hit_points - this->max_hit_points);
        this->hit_points = this->max_hit_points;
    }
    std::cout << YELLOW << "[" << this->_name << "]" << RESET << " is repaired for " << GREEN << "[" << temp << "]" << RESET << " !\n";
}

std::string ClapTrap::getName()
{
    return (this->_name);
}

int ClapTrap::getHit()
{
    return (this->hit_points);
}