#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int count;
		AMateria *mat_sources[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &other);

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
};
