#include "header.hpp"

HumanB::HumanB(std::string  str):_arm(nullptr)
{
    this->_name = str;
}

void    HumanB::attack(void)
{
    if (this->_arm)
        std::cout << this->_name << "  attacks with their " << this->_arm->getType() << std::endl;
    else
        std::cout << "attack whitout weapon" << std::endl;
}

void    HumanB::setWeapon(Weapon &ARM)
{
    this->_arm = &ARM;
}

HumanB::~HumanB (void)
{
}