#include "header.hpp"

Zombie::Zombie(std::string str)
{
    this->_name = str;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout<< this->_name << " get destroy" << std::endl;
}