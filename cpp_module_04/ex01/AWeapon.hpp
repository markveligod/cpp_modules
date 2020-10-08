#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include <iostream>

class AWeapon
{
	protected:
        AWeapon();

		std::string _name;
        int _damage;
        int _apcost;
	public:
	    AWeapon(std::string const & name, int apcost, int damage);
	    AWeapon(AWeapon const & base);
        virtual ~AWeapon();

        AWeapon &operator=(AWeapon const & base);

	    std::string const & getName() const;
	    int getAPCost() const;
	    int getDamage() const;
	    virtual void attack() const = 0;
};
