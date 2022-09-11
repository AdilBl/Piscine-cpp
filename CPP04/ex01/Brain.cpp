#include "header.hpp"

Brain::Brain(void)
{
    std::cout << "Brain get created" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain get destroy" << std::endl;
}

Brain::Brain(Brain const & src)
{
    *this = src;

    return;
}

Brain & Brain::operator=(Brain const & rhs)
{
    std::cout << "----" << std::endl;
    if (!(this == &rhs))
    {
        for (unsigned long i = 0; i < rhs.ideas->size(); i++)
            this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
}