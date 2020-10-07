#include "Victim.hpp"

Victim::Victim()
{}

Victim::Victim(std::string const &name): _name(name)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& other): _name(other._name)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(const Victim& other)
{
    this->_name = other._name;
    return (*this);
}

std::string Victim::getName() const
{
    return (this->_name);
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &base)
{
    out << "I am " << base.getName() << " and I like otters!" << std::endl;
    return (out);
}
