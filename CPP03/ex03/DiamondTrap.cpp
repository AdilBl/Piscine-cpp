# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("noname_clap_name") , ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap : Default constructor called" << std::endl;
    this->_name = "noname";
    setpdv(FragTrap::getpdv());
    setmana(ScavTrap::getmana());
    setdamage(FragTrap::getdamage());
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap : Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") , ScavTrap(name) , FragTrap(name)
{
    std::cout << "DiamondTrap : Default constructor called" << std::endl;
    this->_name = name;
    setpdv(FragTrap::getpdv());
    setmana(ScavTrap::getmana());
    setdamage(FragTrap::getdamage());
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    *this = src;

    return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    if (!(this == &rhs))
    {
        this->_name = rhs._name;
        setname(rhs.getname());
        setpdv(rhs.FragTrap::getpdv());
        setmana(rhs.ScavTrap::getmana());
        setdamage(rhs.FragTrap::getdamage());
    }
    return (*this);
}

void DiamondTrap::attack (const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Diamondtrap name : "<< this->_name << std::endl;
    std::cout << "Claptrap name : " << getname() << std::endl;
}