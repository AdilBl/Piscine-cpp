#pragma once
#ifndef WRONGANIMALE_HPP
# define WRONGANIMALE_HPP

# include "header.hpp"

class Wronganimale
{
    protected:
        std::string type;
    public:
        Wronganimale(void);
        Wronganimale(std::string name);
        Wronganimale(Wronganimale const & src);
        std::string getType(void) const;
        virtual ~Wronganimale();

        void makeSound(void) const;
        Wronganimale & operator=(Wronganimale const & rhs);
};
#endif