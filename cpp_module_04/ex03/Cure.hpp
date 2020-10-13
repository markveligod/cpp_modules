#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure const &other);
		~Cure();

		Cure &operator=(Cure const &other);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};
