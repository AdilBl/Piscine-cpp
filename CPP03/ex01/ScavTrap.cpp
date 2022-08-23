# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
    std::cout << "ScavTrap : Default constructor called" << std::endl;
    setdamage(20);
    setpdv(100);
    setmana(100);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap : Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap : Default constructor called" << std::endl;
    setdamage(20);
    setpdv(100);
    setmana(100);
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    *this = src;

    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    if (!(this == &rhs))
    {
        this->_name = rhs.getname();
        this->_pdv = rhs.getpdv();
        this->_mana = rhs.getmana();
        this->_damage = rhs.getdamage();
    }
    return (*this);
}

void ScavTrap::attack (const std::string& target)
{
    if (getmana() >= 0 && getpdv() >= 0)
    {
        std::cout << "ScavTrap " <<  getname() << " attacks " << target << ", causing " << getdamage() << " points of damage!" << std::endl;
        setmana(getmana() - 1);
        return;
    }
    else
    {
        if(getmana() <= 0)
            std::cout << "No mana to attack" << std::endl;
        if(getpdv() <= 0)
            std::cout << "No heals to attack" << std::endl;
    }
    return;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap est entré enmode Gate keeper." << std::endl;
}