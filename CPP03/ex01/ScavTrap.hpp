#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:

    public:
        ScavTrap(std::string name);
        ScavTrap(void);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);

        ScavTrap & operator=(ScavTrap const & rhs);
        void attack(const std::string& target);      
        void guardGate(void);
};

#endif