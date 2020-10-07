#pragma once

/*
**==========================
**         Includes
**==========================
*/
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    private:
        Sorcerer();
        std::string _name;
        std::string _title;
    public:
        Sorcerer(std::string const &name, std::string const &title);
        Sorcerer(const Sorcerer& other);
	    virtual ~Sorcerer();

        Sorcerer &operator=(const Sorcerer& other);

        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const &vic) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &base);