#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "header.hpp"

class FragTrap : virtual public ClapTrap
{
    private:

    public:
        FragTrap(std::string name);
        FragTrap(void);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);

        FragTrap & operator=(FragTrap const & rhs);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);        
        void highFivesGuys(void);
};

#endif