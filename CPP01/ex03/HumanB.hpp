#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "header.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon      *_arm;
    public:
        HumanB(std::string  str);
        void    setWeapon(Weapon &ARM);
        void    attack(void);
        ~HumanB(void);
};


#endif