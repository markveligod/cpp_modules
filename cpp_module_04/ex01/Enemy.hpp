#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include <iostream>

class Enemy
{
	protected:
        Enemy();

		int _hp;
        std::string _type;
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & base);
        virtual ~Enemy();

        Enemy &operator=(Enemy const & base);

		std::string const & getType() const;
		int getHP() const;

		virtual void takeDamage(int amount);
};
