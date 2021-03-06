#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include <iostream>

/*
**==========================
**         Colors
**==========================
*/
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

class ClapTrap
{
    protected:
        int hit_points;
        int max_hit_points;
        int energy_points;
        int max_energy_points;
        int level;
        std::string _name;
        int melee_attack_damage;
        int ranged_attack_damage;
        int armor_damage_reduction;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        virtual ~ClapTrap();

        std::string getName();
        int getHit();
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};