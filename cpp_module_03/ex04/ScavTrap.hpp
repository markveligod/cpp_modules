#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();

        void challengeNewcomer(void);
};