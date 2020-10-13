#pragma once

/*
**==========================
**		Includes
**==========================
*/
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();
	protected:
		unsigned int _xp;
		std::string _type;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
