#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const &other);
		~Ice();

		Ice &operator=(Ice const &other);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};
