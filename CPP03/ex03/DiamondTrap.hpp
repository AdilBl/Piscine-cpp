#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "header.hpp"
class DiamondTrap: public ScavTrap , public FragTrap
{
    private:
        std::string _name;
    public:
        explicit DiamondTrap(std::string name);
        DiamondTrap(void);
        DiamondTrap(DiamondTrap const & src);
        virtual ~DiamondTrap(void);

        void attack (const std::string& target);
        void whoAmI(void);
        DiamondTrap & operator=(DiamondTrap const & rhs);
};
#endif
