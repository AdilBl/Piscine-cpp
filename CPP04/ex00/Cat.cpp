#include "header.hpp"

Cat::Cat(void):Animale("Cat")
{
    std::cout << "Cat get created" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat get destroy" << std::endl;
}

Cat::Cat(Cat const & src):Animale("Cat")
{
    *this = src;

    return;
}

Cat & Cat::operator=(Cat const & rhs)
{
    if (!(this == &rhs))
    {
        this->type = rhs.type;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou Miaou" << std::endl;
}
