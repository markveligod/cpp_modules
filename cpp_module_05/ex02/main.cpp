#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    std::cout << "|=======================================================|\n";
    Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat francis("Francis", 25);
	std::cout << francis << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(francis);

    Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(francis);
	francis.executeForm(*robot);
	francis.executeForm(*robot);
    std::cout << "|=======================================================|\n";
    try
	{
        Bureaucrat lol("LOL", 150);
        std::cout << lol << std::endl;
		ShrubberyCreationForm shr = ShrubberyCreationForm("home");
		std::cout << shr << std::endl;
		shr.execute(lol);
	}
	catch(std::exception const &e)
	{
		std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
	}
    std::cout << "|=======================================================|\n";
    try
	{
		RobotomyRequestForm rob = RobotomyRequestForm("Bender");
		std::cout << rob << std::endl;
		rob.execute(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cerr << RED << "[Error]: " << RESET << e.what() << std::endl;
	}
    std::cout << "|=======================================================|\n";
    delete shrub;
    delete robot;
    return (0);
}
