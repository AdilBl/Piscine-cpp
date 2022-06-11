#include "header.hpp"

Wronganimale::Wronganimale(void)
{
    std::cout << "Wronganimale get created" << std::endl;
    this->type = "Default";
}

Wronganimale::Wronganimale(std::string name)
{
    std::cout << "Wronganimale get created" << std::endl;
    this->type = name;
}

Wronganimale::Wronganimale(Wronganimale const & src)
{
    *this = src;

    return;
}

std::string Wronganimale::getType(void) const
{
    return(this->type);
}

Wronganimale & Wronganimale::operator=(Wronganimale const & rhs)
{
    if (!(this == &rhs))
    {
        this->type = rhs.type;
    }
    return (*this);
}

Wronganimale::~Wronganimale(void)
{
    std::cout << "Wronganimale was destroy" << std::endl;
}

void Wronganimale::makeSound(void) const
{
    std::cout << "Nothing (Wrong)" << std::endl;
}