#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count = 0;
	for (int i = 0; i < 4; i++)
		this->mat_sources[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	this->count = 0;
	for (int i = 0; i < other.count; i++)
		this->learnMateria(other.mat_sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->mat_sources[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->count; i++)
		delete this->mat_sources[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < this->count; i++)
		delete this->mat_sources[i];
	this->count = 0;
	for (int i = 0; i < other.count; i++)
		this->learnMateria(other.mat_sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->mat_sources[i] = NULL;
	return(*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->count  == 4 || !m)
		return ;
	for (int i = 0; i < this->count; i++)
		if (this->mat_sources[i] == m)
			return ;
	this->mat_sources[this->count++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->count; i++)
		if (this->mat_sources[i]->getType() == type)
			return (this->mat_sources[i]->clone());
	return (NULL);
}
