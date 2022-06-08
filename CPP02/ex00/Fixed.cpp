#include "header.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_n = 0;

    return;
}

Fixed::~Fixed(void)
{
     std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

int Fixed::getRawBits (void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return (this->_n);
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (!(this == &rhs))
        this->_n = rhs.getRawBits();
    return (*this);
}



void    Fixed::setRawBits (int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_n = raw;

    return;
}