#include "header.hpp"

int main (void)
{
    Zombie *test;
    std::string name = "Test 1";
    test = newZombie("Test malloc");
    test->announce();
    delete(test);
    randomChump(name);
}