#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
    std::cout << "|--------------------------------------------------|\n";

	    Character* me = new Character("me");
	    std::cout << *me;
	    Enemy* b = new RadScorpion();
	    AWeapon* pr = new PlasmaRifle();
	    AWeapon* pf = new PowerFist();
	    me->equip(pr);
	    std::cout << *me;
	    me->equip(pf);
	    me->attack(b);
	    std::cout << *me;
	    me->equip(pr);
	    std::cout << *me;
	    me->attack(b);
	    std::cout << *me;
	    me->attack(b);
	    std::cout << *me;
        delete me;

    std::cout << "|--------------------------------------------------|\n";

        Character you("you");

	    Enemy* s = new SuperMutant();

	    you.equip(pr);
	    std::cout << you;
	    you.equip(pf);
	    std::cout << you;
	    you.equip(NULL);
	    std::cout << you;

	    you.attack(s);
	    you.equip(pf);
	    std::cout << you;
	    you.attack(s);
	    std::cout << you;
	    you.attack(s);
	    std::cout << you;
	    you.attack(s);
	    std::cout << you;
	    you.attack(s);
	    std::cout << you;

	    delete pr;
	    delete pf;

    std::cout << "|--------------------------------------------------|\n";
	return 0;
}