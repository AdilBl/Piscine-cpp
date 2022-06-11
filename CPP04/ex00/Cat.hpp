#pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include "header.hpp"

class Cat : public Animale
{
    private:
    public:
        Cat(void);
        Cat(Cat const & src);
        ~Cat();

        virtual void makeSound(void) const;
        Cat & operator=(Cat const & rhs);
};
#endif