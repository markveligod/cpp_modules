#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floater);
        Fixed(Fixed const & base);
        virtual ~Fixed();

        Fixed & operator=(Fixed const & base);

        int getRawBits( void ) const;
        void setRawBits( int const row );
        float toFloat( void ) const;
        int toInt( void ) const;
    private:
        int point;
        const static int bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
