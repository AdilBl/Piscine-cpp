#include "header.hpp"

void    randomChump(std::string name)
{
    Zombie zonzon = Zombie(name);
    zonzon.announce();
}