#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include "header.hpp"

class Fixed
{
    public:
        Fixed (void);
        Fixed ( Fixed const & src);
        ~Fixed (void);

        Fixed & operator=(Fixed const & rhs);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
    private:
        int _n;
        const static int   _rawbits = 8;
};


#endif