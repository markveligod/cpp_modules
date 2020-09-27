#include "ZombieEvent.hpp"
#include <random>

std::string getName()
{
    int randomValue;
    int i = 0;
    std::string name;
    std::string low_reg = "aeiouy";
    std::string high_reg = "bcdfghjklmnpqrstvwxz";
    std::uniform_int_distribution<int> gen_low(0, (low_reg.size() - 1));
    std::uniform_int_distribution<int> gen_high(0, (high_reg.size() - 1));
    std::mt19937 rnd;

    rnd.seed(time(nullptr));
    while (i < 5)
    {
        if (i % 2 == 0)
        {
            randomValue = gen_high(rnd);
            name += high_reg[randomValue];
        }
        else
        {
            randomValue = gen_low(rnd);
            name += low_reg[randomValue];
        }
        i++;
    }
    return name;
}

void print_zombie()
{
    std::cout << CYAN;
    std::cout << "                           \\                     " << std::endl;
    std::cout << "                                .....            " << std::endl;
    std::cout << "                               C C  /            " << std::endl;
    std::cout << "                              /<   /             " << std::endl;
    std::cout << "               ___ __________/_#__=o             " << std::endl;
    std::cout << "              /(- /(\\_\\________   \\              " << std::endl;
    std::cout << "              \\ ) \\ )_      \\o     \\             " << std::endl;
    std::cout << "              /|\\ /|\\       |'     |             " << std::endl;
    std::cout << "                            |     _|             " << std::endl;
    std::cout << "                            /o   __|             " << std::endl;
    std::cout << "                           / '     |             " << std::endl;
    std::cout << "                          / /      |             " << std::endl;
    std::cout << "                         /_/\\______|             " << std::endl;
    std::cout << "                        (   _(    <              " << std::endl;
    std::cout << "                         \\    \\    \\             " << std::endl;
    std::cout << "                          \\    \\    \\            " << std::endl;
    std::cout << "                           \\____\\____\\           " << std::endl;
    std::cout << "                           ____\\_\\__\\_\\          " << std::endl;
    std::cout << "                         /`   /`     o|          " << std::endl;
    std::cout << "                         |___ |_______|          " << std::endl;
    std::cout << RESET;
}

void randomChump()
{
    std::string name = getName();
    Zombie num_3(name, "num_3");

    num_3.announce();
    print_zombie();
}

int main()
{
    ZombieEvent temp;

    //num_1
    std::cout << "=================================================" << std::endl;
    Zombie *num_1 = new Zombie("Phill", "num_1");
    num_1->announce();
    print_zombie();
    delete num_1;

    //num_2
    std::cout << "=================================================" << std::endl;
    Zombie *num_2;
    temp.setZombieType("num_2");
    num_2 = temp.newZombie("Popo");
    num_2->announce();
    print_zombie();
    delete num_2;

    //num_3
    std::cout << "=================================================" << std::endl;
    randomChump();
    std::cout << "=================================================" << std::endl;

    return (0);
}
