#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(std::string const &name, std::string const &title):_name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other):_name(other._name), _title(other._title)
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer& other)
{
    this->_name = other._name;
    this->_title = other._title;
    return (*this);
}

std::string Sorcerer::getName() const
{
    return (this->_name);
}

std::string Sorcerer::getTitle() const
{
    return (this->_title);
}

void Sorcerer::polymorph(Victim const &vic) const
{
    vic.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &base)
{
    out << "I am " << base.getName() << ", " << base.getTitle() << ", and I like ponies!" << std::endl;
    return (out);
}
