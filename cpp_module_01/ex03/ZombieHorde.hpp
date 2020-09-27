#pragma once

#include "Zombie.hpp"

class ZombieHorde
{
    private:
        int _size;
        Zombie *ZHorde;
    public:
    ZombieHorde(int size);
    ~ZombieHorde();
    void announce();
};
