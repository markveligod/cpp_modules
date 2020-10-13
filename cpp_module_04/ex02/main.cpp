#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
	std::cout << "|========================================================|\n";
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
    vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
        cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "|========================================================|\n";

	Squad squad;

	squad.push(new TacticalMarine);
	squad.push(new AssaultTerminator);
	for (int i = 2; i < 40; i++)
	{
		if ((rand() % 100) > 40)
			squad.push(new TacticalMarine);
		else
			squad.push(new AssaultTerminator);
	}
	for (int i = 0; i < 40; i++)
	{
		int r = (rand() % 100);
		std::cout << i << ": ";
		if (r > 66)
			squad.getUnit(i)->battleCry();
		else if (r > 33)
			squad.getUnit(i)->rangedAttack();
		else
			squad.getUnit(i)->meleeAttack();
	}
	std::cout << squad.getCount() << " -> " << squad.push(NULL) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(40 - 1)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(40)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(40 + 1)) << std::endl;
	std::cout << squad.getUnit(-1) << " " << squad.getUnit(10000) << std::endl;
	std::cout << "|========================================================|\n";
	return (0);
}