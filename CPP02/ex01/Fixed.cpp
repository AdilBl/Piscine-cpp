#include "header.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_n = 0;

    return;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_n = nb << Fixed::_rawbits;

    return;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_n = std::roundf(nb *(1 << Fixed::_rawbits));

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

float Fixed::toFloat(void) const
{
    return((float)this->_n / (1 << Fixed::_rawbits));
}

int Fixed::toInt(void) const
{
    return(this->_n >> Fixed::_rawbits);
}

std::ostream &  operator<<(std::ostream & o, Fixed const & i)
{
    o << i.toFloat();
    return(o);
}