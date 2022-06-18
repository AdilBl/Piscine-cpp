#include "easyfind.hpp"

int main ()
{
    std::list<int>      lst1;

    lst1.push_back(1);
    lst1.push_back(17);
    lst1.push_back(42);
    lst1.push_back(412);
    lst1.push_back(142);

    std::cout << easyfind(lst1, 5) << std::endl;
}