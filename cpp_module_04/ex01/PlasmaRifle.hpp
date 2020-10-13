#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const & base);
        ~PlasmaRifle();

        PlasmaRifle &operator=(PlasmaRifle const & base);

        void attack() const;
};
