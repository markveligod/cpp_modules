#include "Squad.hpp"

Squad::Squad()
{
	this->count = 0;
	this->units = NULL;
}

Squad::Squad(Squad const &other)
{
	this->count = 0;
	this->units = NULL;
	for(int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

Squad &Squad::operator=(Squad const &other)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = NULL;
	}
	this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return(*this);
}

int Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int number) const
{
	if (this->count == 0 || number < 0 || number >= count)
		return (NULL);
	return (this->units[number]);
}

int Squad::push(ISpaceMarine* unit)
{
	if (!unit) //if null
		return (this->count);
	if (!this->units)
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		return (this->count = 1);
	}
	for (int i = 0; i < this->count; i++) //if unit is add
		if (this->units[i] == unit)
			return (this->count);
	ISpaceMarine **temp = new ISpaceMarine*[this->count + 1];
	for (int i = 0; i < this->count; i++)
		temp[i] = this->units[i];
	temp[this->count] = unit;
	delete [] this->units;
	this->units = temp;
	return ((++this->count));
}
