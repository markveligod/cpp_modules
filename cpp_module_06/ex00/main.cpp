#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << RED << "[Error]: " << RESET << "Wrong number arguments!\n";
        return (1);
    }
    try
    {
        Convert a(av[1]);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "[Error]: " << RESET << e.what() << '\n';
    }
    
    return (0);
}