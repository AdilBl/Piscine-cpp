#include "header.hpp"

Dog::Dog(void):Animale("Dog")
{
    std::cout << "Dog get created" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog get destroy" << std::endl;
}

Dog::Dog(Dog const & src):Animale("Dog")
{
    *this = src;

    return;
}

Dog & Dog::operator=(Dog const & rhs)
{
    if (!(this == &rhs))
    {
        this->type = rhs.type;
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Wouaf Wouaf" << std::endl;
}
