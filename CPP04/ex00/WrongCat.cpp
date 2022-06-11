#include "header.hpp"

WrongCat::WrongCat(void):Wronganimale("WrongCat")
{
    std::cout << "WrongCat get created" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat get destroy" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src):Wronganimale("WrongCat")
{
    *this = src;

    return;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
    if (!(this == &rhs))
    {
        this->type = rhs.type;
    }
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "Miaou Miaou" << std::endl;
}