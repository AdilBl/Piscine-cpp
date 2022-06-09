#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "header.hpp"

class ClapTrap
{
    private:
        int _pdv;
        int _mana;
        int _damage;
        std::string _name;
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap(void);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //getteur
        int getmana(void) const;
        int getpdv(void) const;
        int getdamage(void) const;
        std::string getname(void) const;

        //setteur
        void setmana(int mana);
        void setpdv(int pdv);
        void setdamage(int damage);
        void setname(std::string name);


        ClapTrap & operator=(ClapTrap const & rhs);
};

#endif