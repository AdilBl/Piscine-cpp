#include "header.hpp"

Data::Data(void)
{
    this->_nombre = 42;
    this->_str = "Rien ne bouge";
}

void Data::printdata(void) const
{
    std::cout << this->_str << std::endl;
    std::cout << this->_nombre << std::endl;
}

Data::~Data(void)
{
}