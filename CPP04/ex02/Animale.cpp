#include "header.hpp"

Animale::Animale(void)
{
    std::cout << "Animale get created" << std::endl;
    this->type = "Default";
}

Animale::Animale(std::string name)
{
    std::cout << "Animale get created" << std::endl;
    this->type = name;
}

Animale::Animale(Animale const & src)
{
    *this = src;

    return;
}

std::string Animale::getType(void) const
{
    return(this->type);
}

Animale & Animale::operator=(Animale const & rhs)
{
    if (!(this == &rhs))
    {
        this->type = rhs.type;
    }
    return (*this);
}

Animale::~Animale(void)
{
    std::cout << "Animale was destroy" << std::endl;
}
