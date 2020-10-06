#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::cout << "|----------------------------------------------------------------------------------------|\n";
    FragTrap *popo = new FragTrap("Popo");
    popo->meleeAttack("toto");
	popo->rangedAttack("tototo");
	popo->takeDamage(24);
	popo->beRepaired(50);
	popo->takeDamage(42);
	popo->takeDamage(100);
	popo->beRepaired(125);
    popo->vaulthunter_dot_exe("random");
    popo->vaulthunter_dot_exe("QUQU");
	popo->vaulthunter_dot_exe("1234");
	popo->vaulthunter_dot_exe("SOS");
	popo->vaulthunter_dot_exe("LOL");
    popo->vaulthunter_dot_exe("25");

	std::cout << "|----------------------------------------------------------------------------------------|\n";
    ScavTrap *bob = new ScavTrap("bob");
    bob->meleeAttack("soso");
	bob->rangedAttack("sososo");
	bob->takeDamage(24);
	bob->beRepaired(50);
	bob->takeDamage(42);
	bob->takeDamage(100);
	bob->beRepaired(125);
    bob->challengeNewcomer();
    bob->challengeNewcomer();
	bob->challengeNewcomer();
	bob->challengeNewcomer();
	bob->challengeNewcomer();
    bob->challengeNewcomer();
	
	std::cout << "|----------------------------------------------------------------------------------------|\n";
	ClapTrap clap("PARENT");
	NinjaTrap *ninja = new NinjaTrap("NINJ4");
	ninja->ninjaShoebox(*ninja);
	ninja->meleeAttack("CL4P-TP");
	ninja->rangedAttack("CL4P-TP");
	ninja->takeDamage(24);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);
	ninja->ninjaShoebox(*popo);
	ninja->ninjaShoebox(*popo);
	ninja->ninjaShoebox(*popo);
	ninja->ninjaShoebox(clap);
	ninja->ninjaShoebox(*bob);
	ninja->ninjaShoebox(*bob);
	ninja->ninjaShoebox(*bob);
	ninja->ninjaShoebox(*bob);
	ninja->ninjaShoebox(clap);
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
	superman->ninjaShoebox(*popo);
	superman->ninjaShoebox(*popo);
	superman->ninjaShoebox(clap);
	superman->ninjaShoebox(*bob);
	superman->ninjaShoebox(*bob);
	superman->ninjaShoebox(*bob);
	superman->ninjaShoebox(clap);
	std::cout << "|----------------------------------------------------------------------------------------|\n";
	delete popo;
	delete bob;
	delete ninja;
	delete superman;

    return (0);
}
