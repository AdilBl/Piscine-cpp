#include "header.hpp"

Fixed::Fixed(void)
{
    this->_n = 0;

    return;
}

Fixed::Fixed(const int nb)
{
    this->_n = nb << Fixed::_rawbits;

    return;
}

Fixed::Fixed(const float nb)
{
    this->_n = std::roundf(nb *(1 << Fixed::_rawbits));

    return;
}

void    Fixed::setRawBits (int const raw)
{
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

Fixed & Fixed::operator=(Fixed const & rhs)
{
    if (!(this == &rhs))
        this->_n = rhs.getRawBits();
    return (*this);
}

std::ostream &  operator<<(std::ostream & o, Fixed const & i)
{
    o << i.toFloat();
    return(o);
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;

    return;
}

int Fixed::getRawBits (void) const
{
    return (this->_n);
}

// Arithmétiques

Fixed  Fixed::operator+(Fixed const & rhs)
{
    return(Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed  Fixed::operator-(Fixed const & rhs)
{
    return(Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed  Fixed::operator/(Fixed const & rhs)
{
    if (rhs.toInt() != 0)
        return(Fixed(this->toFloat() / rhs.toFloat()));
    else
    {
        std::cout << "Cant devise by 0" << std::endl;
        return(*this);
    }
}

Fixed  Fixed::operator*(Fixed const & rhs)
{
    return(Fixed(this->toFloat() * rhs.toFloat()));
}
//Incrémentation & Décrémentation

Fixed & Fixed::operator++()
{
    this->_n++;
    return(*this);
}

Fixed & Fixed::operator--()
{
    this->_n++;
    return(*this);
}

Fixed  Fixed::operator++(int)
{
    Fixed tamp(*this);

    ++this->_n;
    return(tamp);
}

Fixed  Fixed::operator--(int)
{
    Fixed tamp(*this);

    --this->_n;
    return(tamp);
}

// Comparaison

bool Fixed::operator==(Fixed const & rhs)
{
    return(this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs)
{
    return(this->getRawBits() != rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs)
{
    return(this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs)
{
    return(this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator>(Fixed const & rhs)
{
    return(this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs)
{
    return(this->getRawBits() >= rhs.getRawBits());
}

//Min & max

Fixed const & Fixed::min(Fixed const & rhd, Fixed const & rhs)
{
    if (rhd.getRawBits() < rhs.getRawBits())
        return(rhd);
    else
        return(rhs);
}

Fixed & Fixed::min(Fixed & rhd, Fixed & rhs)
{
    if (rhd.getRawBits() < rhs.getRawBits())
        return(rhd);
    else
        return(rhs);
}

Fixed & Fixed::max(Fixed & rhd, Fixed & rhs)
{
    if (rhd.getRawBits() > rhs.getRawBits())
        return(rhd);
    else
        return(rhs);
}

Fixed const & Fixed::max(Fixed const &  rhd, Fixed const & rhs)
{
    if (rhd.getRawBits() > rhs.getRawBits())
        return(rhd);
    else
        return(rhs);
}

