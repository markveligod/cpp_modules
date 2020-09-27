#include "Zombie.hpp"

Zombie::Zombie(): _name(std::string()), _type(std::string())
{}

Zombie::~Zombie()
{
    std::cout << YELLOW << "[" << this->_name << "]" << RED << "[DEAD]\n" << RESET;
}

void Zombie::setZombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
    std::cout << YELLOW << "[" << this->_name << "]" << GREEN << "[LIVE]\n" << RESET;
}

void Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss...\n";
}

std::string Zombie::getName()
{
    int randomValue;
    int i = 0;
    std::string name;
    std::string low_reg = "aeiouy";
    std::string high_reg = "bcdfghjklmnpqrstvwxz";
    std::uniform_int_distribution<int> gen_low(0, (low_reg.size() - 1));
    std::uniform_int_distribution<int> gen_high(0, (high_reg.size() - 1));
    std::random_device rd;

    while (i < 6)
    {
        if (i % 2 == 0)
        {
            randomValue = gen_high(rd);
            name += high_reg[randomValue];
        }
        else
        {
            randomValue = gen_low(rd);
            name += low_reg[randomValue];
        }
        i++;
    }
    return name;
}
