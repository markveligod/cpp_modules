#include "FragTrap.hpp"

int main()
{
    FragTrap popo("Popo");

    popo.meleeAttack("toto");
	popo.rangedAttack("tototo");
	popo.takeDamage(24);
	popo.beRepaired(50);
	popo.takeDamage(42);
	popo.takeDamage(100);
	popo.beRepaired(125);
    popo.vaulthunter_dot_exe("random");
    popo.vaulthunter_dot_exe("QUQU");
	popo.vaulthunter_dot_exe("1234");
	popo.vaulthunter_dot_exe("SOS");
	popo.vaulthunter_dot_exe("LOL");
    popo.vaulthunter_dot_exe("25");
    return (0);
}