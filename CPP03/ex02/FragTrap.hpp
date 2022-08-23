#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap(std::string name);
        FragTrap(void);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);

        FragTrap & operator=(FragTrap const & rhs);     
        void highFivesGuys(void);
};

#endif