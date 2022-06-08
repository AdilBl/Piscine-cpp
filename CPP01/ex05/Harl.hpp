#pragma once
#ifndef Harl_HPP
#define Harl_HPP

#include "header.hpp"

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        static std::string comp[4];
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level );
};


#endif