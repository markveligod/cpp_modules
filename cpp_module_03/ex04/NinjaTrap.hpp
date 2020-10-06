#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
    public:
    NinjaTrap(std::string name);
    virtual ~NinjaTrap();

    void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
};