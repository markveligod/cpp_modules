#include "Fixed.hpp"

Fixed::Fixed():point(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called\n";
    this->point = (integer << this->bits);
}

Fixed::Fixed(const float floater)
{
    std::cout << "Float constructor called\n";
    this->point = roundf(floater * (1 << this->bits));
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

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->point = raw;
}

float Fixed::toFloat( void ) const
{
    return ((this->point / (float)(1 << this->bits)));
}

int Fixed::toInt( void ) const
{
    return (this->point >> this->bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}
