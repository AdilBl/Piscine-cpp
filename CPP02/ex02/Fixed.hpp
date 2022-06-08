#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include "header.hpp"

class Fixed
{
    public:
        Fixed (void);
        Fixed (const int nb);
        Fixed (const float nb);
        Fixed ( Fixed const & src);
        ~Fixed (void);

        Fixed & operator=(Fixed const & rhs);

        //Comparaison
        bool  operator>(Fixed const & rhs);
        bool  operator<(Fixed const & rhs);
        bool  operator>=(Fixed const & rhs);
        bool  operator<=(Fixed const & rhs);
        bool  operator==(Fixed const & rhs);
        bool  operator!=(Fixed const & rhs);

        //Arithmétiques
        Fixed  operator+(Fixed const & rhs);
        Fixed  operator-(Fixed const & rhs);
        Fixed  operator*(Fixed const & rhs);
        Fixed  operator/(Fixed const & rhs);

        //Incrémentation & Décrémentation
        Fixed & operator++();
        Fixed  operator++(int);
        Fixed & operator--();
        Fixed  operator--(int);

        //Min & Max
        static Fixed const & min(Fixed const & rhd, Fixed const & rhs);
        static Fixed & min(Fixed  & rhd, Fixed  & rhs);
        static Fixed const & max(Fixed const & rhd, Fixed const & rhs);
        static Fixed & max(Fixed  & rhd, Fixed  & rhs);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
    private:
        int _n;
        const static int   _rawbits = 8;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i);
#endif