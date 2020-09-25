#include "Pony.Class.hpp"

Pony::Pony(std::string name, std::string color, std::string weight):_name(name), _color(color), _weight(weight)
{
    std::cout << YELLOW << "\n[Constructor]" << RESET << GREEN << "[OK]\n" << RESET;
}

Pony::~Pony()
{
    std::cout << YELLOW << "\n[Destructor]" << RESET << GREEN << "[OK]\n" << RESET;
}

void Pony::status()
{
    std::cout << "[STATUS]:\n";
    std::cout << YELLOW << "[Name]: " << RESET << this->_name << "\n";
    std::cout << YELLOW << "[Color]: " << RESET << this->_color << "\n";
    std::cout << YELLOW << "[Weight]: " << RESET << this->_weight << "\n";
}