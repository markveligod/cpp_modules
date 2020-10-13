#pragma once
#include "ISpaceMarine.hpp"
#include <cstdlib>

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int number) const = 0;
		virtual int push(ISpaceMarine* unit) = 0;
};