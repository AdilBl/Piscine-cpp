#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "header.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain const & src);
        Brain & operator=(Brain const & rhs);
        virtual ~Brain(void);
};
#endif