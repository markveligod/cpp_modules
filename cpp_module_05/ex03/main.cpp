#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << "|=======================================================|\n";
    try
	{
		Intern  someRandomIntern;
    	Form*   rrf;
    
    	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	catch(std::exception const &e)
	{
		std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
	}
	std::cout << "|=======================================================|\n";
	try
	{
		Intern  someRandomIntern;
    	Form*   rrf;
    
    	rrf = someRandomIntern.makeForm("shrubbery", "Shrub");
		delete rrf;
	}
	catch(std::exception const &e)
	{
		std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
	}
	std::cout << "|=======================================================|\n";
	try
	{
		Intern  someRandomIntern;
    	Form*   rrf;
    
    	rrf = someRandomIntern.makeForm("Presidential ", "Pres");
		delete rrf;
	}
	catch(std::exception const &e)
	{
		std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
	}
	std::cout << "|=======================================================|\n";
	try
	{
		Intern  someRandomIntern;
    	Form*   rrf;
    
    	rrf = someRandomIntern.makeForm("Robotomy request Presidential", "Bender");
		delete rrf;
	}
	catch(std::exception const &e)
	{
		std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
	}
	std::cout << "|=======================================================|\n";
	try
	{
		Intern  someRandomIntern;
    	Form*   rrf;
    
    	rrf = someRandomIntern.makeForm("HUIfheiuwhfu uwehguowhugohweugh83 3289748239789", "Bender");
		delete rrf;
	}
	catch(std::exception const &e)
	{
		std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
	}
	std::cout << "|=======================================================|\n";
	try
	{
		Intern  someRandomIntern;
    	Form*   rrf;
    
    	rrf = someRandomIntern.makeForm("", "Bender");
		delete rrf;
	}
	catch(std::exception const &e)
	{
		std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
	}
	std::cout << "|=======================================================|\n";
    return (0);
}
