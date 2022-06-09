#include"header.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap : Default constructor called" << std::endl;
    ScavTrap::setname("Noname");
    ScavTrap::setmana(50);
    ScavTrap::setpdv(100);
    ScavTrap::setdamage(20);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap : Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap : Default constructor called" << std::endl;
    ScavTrap::setname(name);
    ScavTrap::setmana(50);
    ScavTrap::setpdv(100);
    ScavTrap::setdamage(20);
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
        this->_name = rhs.ScavTrap::getname();
        this->_pdv = rhs.ScavTrap::getpdv();
        this->_mana = rhs.ScavTrap::getmana();
        this->_damage = rhs.ScavTrap::getdamage();
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

void ScavTrap::beRepaired (unsigned int amount)
{
    if(getmana() >= 0 && getpdv() >= 0)
    {
        std::cout << "ScavTrap " <<  getname() << "repair, causing " << amount << " points of healing" << std::endl;
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

void ScavTrap::takeDamage(unsigned int amount)
{
    setpdv(getpdv() - amount);
    if (getpdv() <= 0)
    {
        std::cout << "ScavTrap " <<  getname() << " Take damage, lose " << amount << " of heals" << std::endl;
        std::cout << "ScavTrap " << getname() << " die" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " <<  getname() << " Take damage, lose " << amount << " of heals" << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap est entré enmode Gate keeper." << std::endl;
}