#include "Bureaucrat.hpp"

int main()
{
    std::cout << "|=======================================================|\n";
    {
        try
        {
            Bureaucrat jack("Jack", 0);
	    	std::cout << jack << std::endl;
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
    }
    std::cout << "|=======================================================|\n";
    {
        try
        {
            Bureaucrat bob("Bob", 151);
	    	std::cout << bob << std::endl;
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
    }
    std::cout << "|=======================================================|\n";
    {
        try
        {
            Bureaucrat pop("Pop", 75);
	    	std::cout << pop << std::endl;
            pop.inc_grade();
            std::cout << pop << std::endl;
            pop.dec_grade();
            std::cout << pop << std::endl;
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
    }
    std::cout << "|=======================================================|\n";
    {
        try
        {
            Bureaucrat bill("Bill", 1);
	    	std::cout << bill << std::endl;
            bill.inc_grade();
            std::cout << bill << std::endl;
            bill.dec_grade();
            std::cout << bill << std::endl;
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
    }
    std::cout << "|=======================================================|\n";
    {
        try
        {
            Bureaucrat tod("Tod", 150);
	    	std::cout << tod << std::endl;
            tod.dec_grade();
            std::cout << tod << std::endl;
            tod.inc_grade();
            std::cout << tod << std::endl;
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
    }
    std::cout << "|=======================================================|\n";
    return (0);
}