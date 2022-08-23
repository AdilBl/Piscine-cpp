#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
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