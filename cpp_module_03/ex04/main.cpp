#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::cout << "|----------------------------------------------------------------------------------------|\n";
	SuperTrap *superman = new SuperTrap("SUPERMAN");
	superman->meleeAttack("CL4P-TP");
	superman->rangedAttack("CL4P-TP");
	superman->takeDamage(24);
	superman->beRepaired(50);
	superman->takeDamage(42);
	superman->takeDamage(100);
	superman->beRepaired(125);
	superman->vaulthunter_dot_exe("CL4P-TP");
	superman->vaulthunter_dot_exe("CL4P-TP");
	std::cout << "|----------------------------------------------------------------------------------------|\n";
	delete superman;

    return (0);
}
