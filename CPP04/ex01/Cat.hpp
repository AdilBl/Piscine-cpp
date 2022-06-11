#pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include "header.hpp"

class Cat : public Animale
{
    private:
        Brain*  _Brain;
    public:
        Cat(void);
        Cat(Cat const & src);
        virtual ~Cat();

        virtual void makeSound(void) const;
        Cat & operator=(Cat const & rhs);
};
#endif