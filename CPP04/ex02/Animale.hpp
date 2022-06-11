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
        virtual ~Animale();

        virtual void makeSound(void) const = 0;
        Animale & operator=(Animale const & rhs);
};
#endif