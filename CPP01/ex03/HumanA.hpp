#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "header.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      *_arm;
    public:
        HumanA(std::string  str, Weapon &Arm);
        void    attack(void);
        ~HumanA(void);
};


#endif