#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
    public:
        PowerFist();
        PowerFist(PowerFist const & base);
        ~PowerFist();

        PowerFist &operator=(PowerFist const & base);

        void attack() const;
};
