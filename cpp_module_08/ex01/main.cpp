#include "Span.hpp"

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

int main()
{
    srand(time(NULL));
    std::cout << RED << "|============================|\n" << RESET;
    std::cout << CYAN << "Testing subject example...\n" << RESET;
    Span sp = Span(5);
    
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << YELLOW << "[Short Span]: \t" << GREEN << sp.shortestSpan() << RESET << std::endl;
    std::cout << YELLOW << "[Long Span]: \t" << GREEN << sp.longestSpan() << RESET << std::endl;

    std::cout << RED << "|============================|\n" << RESET;
    std::cout << CYAN << "Testing ERROR min size array...\n" << RESET;
    try
    {
        Span sp_2 = Span(5);

        sp_2.addNumber(5);
        std::cout << sp_2.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "\t[Error]: " << RESET << e.what() << '\n';
    }


    std::cout << RED << "|============================|\n" << RESET;
    std::cout << CYAN << "Testing ERROR max size array...\n" << RESET;
    try
    {
        Span sp_3 = Span(5);

        sp_3.addNumber(5);
        sp_3.addNumber(6);
        sp_3.addNumber(7);
        sp_3.addNumber(8);
        sp_3.addNumber(9);
        sp_3.addNumber(10);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "\t[Error]: " << RESET << e.what() << '\n';
    }

    std::cout << RED << "|============================|\n" << RESET;
    std::cout << CYAN << "Testing ERROR duplicate numbers...\n" << RESET;
    try
    {
        Span sp_3 = Span(5);

        sp_3.addNumber(5);
        sp_3.addNumber(5);
        sp_3.addNumber(5);
        sp_3.addNumber(5);
        sp_3.addNumber(5);
        sp_3.addNumber(5);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "\t[Error]: " << RESET << e.what() << '\n';
    }

    std::cout << RED << "|============================|\n" << RESET;
    std::cout << CYAN << "Testing numbers with 10 000 value...\n" << RESET;
    try
    {
        Span sp_4 = Span(300);
        for (int i = 0; i < 30; i++)
            sp_4.addNumber(rand() % 20000);
        std::cout << YELLOW << "[Short Span]: \t" << GREEN << sp_4.shortestSpan() << RESET << std::endl;
        std::cout << YELLOW << "[Long Span]: \t" << GREEN << sp_4.longestSpan() << RESET << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "\t[Error]: " << RESET << e.what() << '\n';
    }

    std::cout << RED << "|============================|\n" << RESET;
    
    return (0);
}