#pragma once

#include "Brain.hpp"

class Human
{
    private:
        const Brain omg;
    public:
        Human();
        ~Human();
        const Brain &getBrain();
        std::string identify();
};