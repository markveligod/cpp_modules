#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include "Enemy.hpp"

class RadScorpion: public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion const & base);
        ~RadScorpion();

        RadScorpion &operator=(RadScorpion const & base);

        void takeDamage(int amount) override;
};
