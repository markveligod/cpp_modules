/*
**==========================
**		Includes
**==========================
*/
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

/*
**==========================
**         Colors
**==========================
*/
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"


Base * generate(void)
{
    int num = rand() % 100;

    if (num > 50)
        return (new A);
    else if (num > 25)
        return (new B);
    return (new C);
}

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A";
    if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B";
    if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C";
}

void identify_from_reference(Base & p)
{
    if (dynamic_cast<A*>(&p) != NULL)
        std::cout << "A";
    if (dynamic_cast<B*>(&p) != NULL)
        std::cout << "B";
    if (dynamic_cast<C*>(&p) != NULL)
        std::cout << "C";
}

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        std::cout << RED << "|=========================|\n" << RESET;
        std::cout << YELLOW << "Test #" << GREEN << i + 1 << RESET << std::endl;
        Base *ptr = generate();
        std::cout << YELLOW << "[identify_from_pointer]: " << CYAN;
        identify_from_pointer(ptr);
        std::cout << RESET << std::endl << YELLOW << "[identify_from_reference]: " << CYAN;
        identify_from_reference(*ptr);
        std::cout << RESET << std::endl;
        std::cout << RED << "|=========================|\n" << RESET;
    }
    return (0);
}