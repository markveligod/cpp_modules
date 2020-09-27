#pragma once

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &gun;
    public:
        HumanA(std::string const &name, Weapon &gun);
        ~HumanA();
        void attack();
};