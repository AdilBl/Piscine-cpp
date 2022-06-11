#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "header.hpp"

class Dog : public Animale
{
    private:
        Brain* _Brain;
    public:
        Dog(void);
        Dog(Dog const & src);
        virtual ~Dog();

        virtual void makeSound(void) const;
        Dog & operator=(Dog const & rhs);
};
#endif