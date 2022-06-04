#include "header.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *tamp = new Zombie[N];
    for (int i = 0; i < N; i++)
        tamp[i].setname(name);
    return(tamp);
}