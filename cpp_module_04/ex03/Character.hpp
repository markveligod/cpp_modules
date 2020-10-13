#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		Character();
		
		std::string _name;
		int equip_id;
		AMateria *materials[4];
	public:
		Character(std::string const &name);
		Character(Character const &other);
		~Character();

		Character &operator=(Character const &other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
