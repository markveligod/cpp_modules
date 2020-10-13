#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
    public:
        SuperMutant();
        SuperMutant(SuperMutant const & base);
        ~SuperMutant();

        SuperMutant &operator=(SuperMutant const & base);

        void takeDamage(int amount);
};
