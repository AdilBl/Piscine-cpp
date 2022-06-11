#pragma once
#ifndef ANIMALE_HPP
# define ANIMALE_HPP

# include "header.hpp"

class Animale
{
    protected:
        std::string type;
    public:
        Animale(void);
        Animale(std::string name);
        Animale(Animale const & src);
        std::string getType(void) const;
        ~Animale();

        virtual void makeSound(void) const;
        Animale & operator=(Animale const & rhs);
};
#endif