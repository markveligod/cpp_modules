#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        virtual ~FragTrap();

        void vaulthunter_dot_exe(std::string const &target);
};
