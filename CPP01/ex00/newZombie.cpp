#include "header.hpp"

Zombie* newZombie( std::string name )
{
    Zombie  *tamp = new Zombie(name);
    return(tamp);
}