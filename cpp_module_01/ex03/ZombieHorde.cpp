#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size)
{
    this->_size = size;
    
    std::cout << YELLOW << "[ZombieHorde]" << GREEN << "[START]\n" << RESET;
    if (size > 0)
    {
        this->ZHorde = new Zombie[size];
        for (int i = 0; i < size; i++)
            this->ZHorde[i].setZombie(this->ZHorde[i].getName(), "Horde");
    }
    else
        std::cout << RED << "[Error]: " << RESET << "Not enough zombies !\n";
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->ZHorde;
    std::cout << YELLOW << "[ZombieHorde]" << RED << "[END]\n" << RESET;
}

void ZombieHorde::announce()
{
    for (int i = 0; i < this->_size; i++)
        this->ZHorde[i].announce();
}