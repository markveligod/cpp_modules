#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
		Character();

        std::string _name;
        int _ap;
        AWeapon *_eq;
	public:
		Character(std::string const & name);
		Character(Character const & base);
		~Character();

        Character &operator=(Character const & base);

		void recoverAP();
		void equip(AWeapon *base);
		void attack(Enemy *base);
		std::string const & getName() const;
        int getAP(void) const;
        AWeapon *getWeapon(void) const;
};

std::ostream &operator<<(std::ostream &out, Character const &base);
