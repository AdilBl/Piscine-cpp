#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "header.hpp"

class Dog : public Animale
{
    private:
    public:
        Dog(void);
        Dog(Dog const & src);
        ~Dog();

        virtual void makeSound(void) const;
        Dog & operator=(Dog const & rhs);
};
#endif