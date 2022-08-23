# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
    setname("Noname");
    setmana(100);
    setpdv(100);
    setdamage(30);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    setname(name);
    setmana(100);
    setpdv(100);
    setdamage(30);
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;

    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

void ClapTrap::attack (const std::string& target)
{
    if (getmana() >= 0 && getpdv() >= 0)
    {
        std::cout << "ClapTrap " <<  getname() << " attacks " << target << ", causing " << getdamage() << " points of damage!" << std::endl;
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

void ClapTrap::beRepaired (unsigned int amount)
{
    if(getmana() >= 0 && getpdv() >= 0)
    {
        std::cout << "ClapTrap " <<  getname() << "repair, causing " << amount << " points of healing" << std::endl;
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

void ClapTrap::takeDamage(unsigned int amount)
{
    setpdv(getpdv() - amount);
    if (getpdv() <= 0)
    {
        std::cout << "ClapTrap " <<  getname() << " Take damage, lose " << amount << " of heals" << std::endl;
        std::cout << "ClapTrap " << getname() << " die" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " <<  getname() << " Take damage, lose " << amount << " of heals" << std::endl;
    }
}

//Getteur
int ClapTrap::getdamage (void) const
{
    return(this->_damage);
}

int ClapTrap::getmana (void) const
{
    return(this->_mana);
}

int ClapTrap::getpdv (void) const
{
    return(this->_pdv);
}

std::string ClapTrap::getname (void) const
{
    return (this->_name);
}

//Setteur
void ClapTrap::setdamage (int damage)
{
    this->_damage = damage;
}

void ClapTrap::setmana (int mana)
{
    this->_mana = mana;
}

void ClapTrap::setpdv (int pdv)
{
    this->_pdv = pdv;
}

void ClapTrap::setname (std::string name)
{
    this->_name = name;
}