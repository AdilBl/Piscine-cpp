#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include"header.hpp"

class Weapon
{
    public:
        Weapon(std::string str);
        std::string const &getType(void) const;
        void    setType(std::string str);
        ~Weapon(void);

    private:
        std::string _type;
};

#endif