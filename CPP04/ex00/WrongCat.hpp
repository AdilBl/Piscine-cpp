#pragma once
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "header.hpp"

class WrongCat : public Wronganimale
{
    private:
    public:
        WrongCat(void);
        WrongCat(WrongCat const & src);
        ~WrongCat();

        void makeSound(void) const;
        WrongCat & operator=(WrongCat const & rhs);
};
#endif