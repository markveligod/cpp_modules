#include "ZombieHorde.hpp"

void print_zombie()
{
    std::cout << CYAN;
    std::cout << "                         .....       " << std::endl;
    std::cout << "                        C C  /       " << std::endl;
    std::cout << "                       /<   /        " << std::endl;
    std::cout << "        ___ __________/_#__=o        " << std::endl;
    std::cout << "       /(- /(\\_\\________   \\      " << std::endl;
    std::cout << "       \\ ) \\ )_      \\o     \\    " << std::endl;
    std::cout << "       /|\\ /|\\       |'     |      " << std::endl;
    std::cout << "                     |     _|        " << std::endl;
    std::cout << "                     /o   __|        " << std::endl;
    std::cout << "                    / '     |        " << std::endl;
    std::cout << "                   / /      |        " << std::endl;
    std::cout << "                  /_/\\______|       " << std::endl;
    std::cout << "                 (   _(    <         " << std::endl;
    std::cout << "                  \\    \\    \\     " << std::endl;
    std::cout << "                   \\    \\    \\    " << std::endl;
    std::cout << "                    \\____\\____\\   " << std::endl;
    std::cout << "                    ____\\_\\__\\_\\ " << std::endl;
    std::cout << "                  /`   /`     o|     " << std::endl;
    std::cout << "                  |___ |_______|     " << std::endl;
    std::cout << RESET;
    std::cout << RED;
    std::cout << "                         .....       " << std::endl;
    std::cout << "                        C C  /       " << std::endl;
    std::cout << "                       /<   /        " << std::endl;
    std::cout << "        ___ __________/_#__=o        " << std::endl;
    std::cout << "       /(- /(\\_\\________   \\      " << std::endl;
    std::cout << "       \\ ) \\ )_      \\o     \\    " << std::endl;
    std::cout << "       /|\\ /|\\       |'     |      " << std::endl;
    std::cout << "                     |     _|        " << std::endl;
    std::cout << "                     /o   __|        " << std::endl;
    std::cout << "                    / '     |        " << std::endl;
    std::cout << "                   / /      |        " << std::endl;
    std::cout << "                  /_/\\______|       " << std::endl;
    std::cout << "                 (   _(    <         " << std::endl;
    std::cout << "                  \\    \\    \\     " << std::endl;
    std::cout << "                   \\    \\    \\    " << std::endl;
    std::cout << "                    \\____\\____\\   " << std::endl;
    std::cout << "                    ____\\_\\__\\_\\ " << std::endl;
    std::cout << "                  /`   /`     o|     " << std::endl;
    std::cout << "                  |___ |_______|     " << std::endl;
    std::cout << RESET;
    std::cout << YELLOW;
    std::cout << "                         .....       " << std::endl;
    std::cout << "                        C C  /       " << std::endl;
    std::cout << "                       /<   /        " << std::endl;
    std::cout << "        ___ __________/_#__=o        " << std::endl;
    std::cout << "       /(- /(\\_\\________   \\      " << std::endl;
    std::cout << "       \\ ) \\ )_      \\o     \\    " << std::endl;
    std::cout << "       /|\\ /|\\       |'     |      " << std::endl;
    std::cout << "                     |     _|        " << std::endl;
    std::cout << "                     /o   __|        " << std::endl;
    std::cout << "                    / '     |        " << std::endl;
    std::cout << "                   / /      |        " << std::endl;
    std::cout << "                  /_/\\______|       " << std::endl;
    std::cout << "                 (   _(    <         " << std::endl;
    std::cout << "                  \\    \\    \\     " << std::endl;
    std::cout << "                   \\    \\    \\    " << std::endl;
    std::cout << "                    \\____\\____\\   " << std::endl;
    std::cout << "                    ____\\_\\__\\_\\ " << std::endl;
    std::cout << "                  /`   /`     o|     " << std::endl;
    std::cout << "                  |___ |_______|     " << std::endl;
    std::cout << RESET;
}

int main()
{
    ZombieHorde horde(6);
    horde.announce();
    print_zombie();
    return (0);
}
