#pragma once

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const & base);
        virtual ~Fixed();

        Fixed & operator=(Fixed const & base);

        int getRawBits( void ) const;
        void setRawBits( int const row );
    private:
        int point;
        const static int bits = 8;
};
