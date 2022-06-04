#include "header.hpp"

int main (void)
{
    Zombie *test;

    test = zombieHorde(5, "Adil");
    test->announce();
    test[1].announce();
    delete []test;
    return(0);
}