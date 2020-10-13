#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << "|========================================================|\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* first;
    AMateria* zero;
	zero = src->createMateria("ice");
	me->equip(zero);
	first = src->createMateria("cure");
	me->equip(first);

	ICharacter* bob = new Character("bob");

	me->use(1, *bob);
	me->use(0, *bob);
	
    std::cout << "|========================================================|\n";

    std::cout << "ICE XP: " << first->getXP() << std::endl;
    std::cout << "CURE XP: " << zero->getXP() << std::endl;
    me->use(0, *bob);
	me->use(1, *bob);
    std::cout << "ICE XP: " << first->getXP() << std::endl;
    std::cout << "CURE XP: " << zero->getXP() << std::endl;
    me->use(0, *bob);
	me->use(1, *bob);
    std::cout << "ICE XP: " << first->getXP() << std::endl;
    std::cout << "CURE XP: " << zero->getXP() << std::endl;

    std::cout << "|========================================================|\n";
    std::cout << "ICE XP: " << first->getXP() << std::endl;
    std::cout << "CURE XP: " << zero->getXP() << std::endl;
    me->use(1, *bob);
	me->use(1, *bob);
    std::cout << "ICE XP: " << first->getXP() << std::endl;
    std::cout << "CURE XP: " << zero->getXP() << std::endl;
    me->use(1, *bob);
	me->use(1, *bob);
    std::cout << "ICE XP: " << first->getXP() << std::endl;
    std::cout << "CURE XP: " << zero->getXP() << std::endl;

    std::cout << "|========================================================|\n";

	delete bob;
	delete me;
	delete src;
	
	return 0;
}