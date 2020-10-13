#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		int count;
		ISpaceMarine **units;
	public:
		Squad();
		Squad(Squad const &other);
		virtual ~Squad();

		Squad &operator=(Squad const &other);

		int getCount() const;
		ISpaceMarine* getUnit(int number) const;
		int push(ISpaceMarine* unit);
};
