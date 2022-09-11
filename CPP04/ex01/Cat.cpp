#include "header.hpp"

Cat::Cat(void):Animale("Cat")
{
    this->_Brain = new Brain();
    std::cout << "Cat get created" << std::endl;
}

Cat::~Cat(void)
{
    delete this->_Brain;
    std::cout << "Cat get destroy" << std::endl;
}

Cat::Cat(Cat const & src):Animale("Cat")
{
    this->_Brain = new Brain();
    *this = src;

    return;
}

Cat & Cat::operator=(Cat const & rhs)
{
    if (!(this == &rhs))
    {
        this->type = rhs.type;
        *this->_Brain = *rhs._Brain;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou Miaou" << std::endl;
}
