#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::cout << "|=======================================================|\n";
    {
        Bureaucrat pop("Pop", 101);
        std::cout << pop << std::endl;
        ShrubberyCreationForm tax("TAX");
	    std::cout << tax << std::endl;
        tax.beSigned(pop);
        std::cout << tax << std::endl;
        try
        {
            tax.execute(pop);
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
    }
    std::cout << "|=======================================================|\n";
    {
        Bureaucrat pop("Pop", 101);
        std::cout << pop << std::endl;
        ShrubberyCreationForm tax("TAX");
	    std::cout << tax << std::endl;
        try
        {
            tax.execute(pop);
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
    }
    std::cout << "|=======================================================|\n";
    return (0);
}
