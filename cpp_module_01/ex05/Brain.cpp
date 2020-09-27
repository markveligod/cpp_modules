#include "Brain.hpp"

Brain::Brain()
{
    std::cout << CYAN << std::endl;
    std::cout << "      .__---~~~(~~-_." << std::endl;
    std::cout << "   _-'  ) -~~- ) _-\" )_" << std::endl;
    std::cout << "  (  ( `-,_..`.,_--_ '_,)_" << std::endl;
    std::cout << " (  -_)  ( -_-~  -_ `,    )" << std::endl;
    std::cout << " (_ -_ _-~-__-~`, ,' )__-'))--___--~~~--__--~~--___--__.." << std::endl;
    std::cout << " _ ~`_-'( (____;--==,,_))))--___--~~~--__--~~--__----~~~'`=__-~+_-_." << std::endl;
    std::cout << "(@) (@) `````      `-_(())_-~" << std::endl;
    std::cout << RESET << std::endl;
    std::cout << YELLOW <<"[Brain]" << GREEN << "[CREATE]\n" << RESET;
}

Brain::~Brain()
{
    std::cout << YELLOW << "[Brain]" << RED << "[DESTROY]\n" << RESET;
}

std::string Brain::identify() const
{
    unsigned long ptr = (unsigned long)this;
    std::stringstream os;

    os << "0x" << std::uppercase << std::hex << ptr;
    return (os.str());
}
