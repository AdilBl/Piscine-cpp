#include "header.hpp"

Weapon::Weapon(std::string str)
{
    setType(str);
}

void    Weapon::setType(std::string str)
{
    this->_type = str;
}

std::string const &Weapon::getType(void) const
{
    return(this->_type);
}

Weapon::~Weapon(void)
{
}