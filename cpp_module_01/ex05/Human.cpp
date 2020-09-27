#include "Human.hpp"

Human::Human()
{
    std::cout << YELLOW <<"[Human]" << GREEN << "[CREATE]\n" << RESET;
}

Human::~Human()
{
    std::cout << YELLOW << "[Human]" << RED << "[DESTROY]\n" << RESET;
}

const Brain &Human::getBrain()
{
	return (this->omg);
}

std::string Human::identify()
{
	return (this->omg.identify());
}
