#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include <iostream>
#include "Victim.hpp"

class Peon: public Victim
{
    private:
        Peon();
    public:
        Peon(std::string const &name);
        Peon(Peon const &other);
        ~Peon();

        Peon &operator=(const Peon& other);

	    void getPolymorphed(void) const;
};
