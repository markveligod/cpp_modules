#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	delete popo;

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
	delete bob;
	
	std::cout << "|----------------------------------------------------------------------------------------|\n";
    return (0);
}
