#include"header.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    std::cout << "FragTrap : Default constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap : Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap : Default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    *this = src;

    return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    if (!(this == &rhs))
    {
        setname(rhs.getname());
        setpdv(rhs.getpdv());
        setmana(rhs.getmana());
        setdamage(rhs.getdamage());
    }
    return (*this);
}

void FragTrap::attack (const std::string& target)
{
    if (getmana() >= 0 && getpdv() >= 0)
    {
        std::cout << "FragTrap " <<  getname() << " attacks " << target << ", causing " << getdamage() << " points of damage!" << std::endl;
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

void FragTrap::beRepaired (unsigned int amount)
{
    if(getmana() >= 0 && getpdv() >= 0)
    {
        std::cout << "FragTrap " <<  getname() << "repair, causing " << amount << " points of healing" << std::endl;
        setmana(getmana() - 1);
        setpdv(getpdv() + amount);
        return;
    }
    else
    {
        if(getmana() <= 0)
            std::cout << "No mana to repair" << std::endl;
        if(getpdv() <= 0)
            std::cout << "No heals to repair" << std::endl;
    }
    return;
}

void FragTrap::takeDamage(unsigned int amount)
{
    setpdv(getpdv() - amount);
    if (getpdv() <= 0)
    {
        std::cout << "FragTrap " <<  getname() << " Take damage, lose " << amount << " of heals" << std::endl;
        std::cout << "FragTrap " << getname() << " die" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " <<  getname() << " Take damage, lose " << amount << " of heals" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap demande un high fives." << std::endl;
}