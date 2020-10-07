#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
    std::cout << "|----------------------------------------------------------------------------------------|" << std::endl;
    {
	    Sorcerer robert("Robert", "the Magnificent");
	    Victim jim("Jimmy");
	    Peon joe("Joe");
	    std::cout << robert << jim << joe;
	    robert.polymorph(jim);
	    robert.polymorph(joe);
    }
    std::cout << "|----------------------------------------------------------------------------------------|" << std::endl;
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        Sorcerer blank(robert);

	    Victim franck(jim);
	    Peon jean(joe);

	    std::cout << blank << franck << jean;

	    franck = jim;
	    blank.polymorph(franck);
	    franck.getPolymorphed();
	    blank = robert;
	    jean = joe;
	    blank.polymorph(jean);
	    jean.getPolymorphed();
    }
    std::cout << "|----------------------------------------------------------------------------------------|" << std::endl;
    return (0);
}