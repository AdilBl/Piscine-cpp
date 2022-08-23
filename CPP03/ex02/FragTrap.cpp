# include "FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap()
{
    std::cout << "FragTrap : Default constructor called" << std::endl;
    setdamage(20);
    setpdv(100);
    setmana(100);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap : Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "FragTrap : Default constructor called" << std::endl;
    setdamage(20);
    setpdv(100);
    setmana(100);
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap demande un high fives." << std::endl;
}