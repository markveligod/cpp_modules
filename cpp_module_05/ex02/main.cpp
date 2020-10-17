#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "|=======================================================|\n";
    {
        try
        {
            Form formException("formException", 100, 0);
	    	std::cout << formException << std::endl;
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
            Form formException("formException", 0, 100);
	    	std::cout << formException << std::endl;
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
            Form formException("formException", 1000, 100);
	    	std::cout << formException << std::endl;
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
            Form formException("formException", 100, 1000);
	    	std::cout << formException << std::endl;
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
        Form form1("Taxes", 100, 50);
        std::cout << form1 << std::endl;
        try
        {
            form1.beSigned(pop);
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
        pop.inc_grade();
        try
        {
            form1.beSigned(pop);
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
        std::cout << form1 << std::endl;
    }
    std::cout << "|=======================================================|\n";
    {
        Bureaucrat bob("bob", 1);
        std::cout << bob << std::endl;
        Form form1("KOKOS", 100, 50);
        std::cout << form1 << std::endl;
        try
        {
            bob.signForm(form1);
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
        bob.dec_grade();
        try
        {
            bob.signForm(form1);
        }
        catch(std::exception & e)
        {
            std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
        }
        std::cout << form1 << std::endl;
    }
    std::cout << "|=======================================================|\n";
    return (0);
}
