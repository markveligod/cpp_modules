#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T & mass, int & number)
{
    typename T::iterator temp;
    temp = std::find(mass.begin(), mass.end(), number);
    if (temp == mass.end())
        throw std::runtime_error("It is not found in array !(-_-)!");
    return (temp);
}
