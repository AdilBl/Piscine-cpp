#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

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
