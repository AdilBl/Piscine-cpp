#include "header.hpp"

HumanA::HumanA (std::string  str, Weapon &Arm)
{
    this->_name = str;
    this->_arm = &Arm;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << "  attacks with their " << this->_arm->getType() << std::endl;
}

HumanA::~HumanA (void)
{
}