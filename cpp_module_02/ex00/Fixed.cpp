#include "Fixed.hpp"

Fixed::Fixed():point(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const & base)
{
    std::cout << "Copy constructor called\n";
    this->point = base.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(Fixed const & base)
{
    std::cout << "Assignation operator called\n";
    this->point = base.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return (this->point);
}

void Fixed::setRawBits(int const row)
{
    std::cout << "setRawBits member function called\n";
    this->point = row;
}
