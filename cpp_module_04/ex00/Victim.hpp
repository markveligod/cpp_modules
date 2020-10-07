#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include <iostream>

class Victim
{
    protected:
        Victim();
        std::string _name;
    public:
        Victim(std::string const &name);
        Victim(const Victim& other);
        virtual ~Victim();

        Victim &operator=(const Victim& other);

        std::string getName() const;
        virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &base);
