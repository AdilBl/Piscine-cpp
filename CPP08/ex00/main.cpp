#include "easyfind.hpp"

int main ()
{
    std::list<int>      lst1;

    lst1.push_back(17);
    lst1.push_back(1);
    lst1.push_back(42);
    lst1.push_back(412);
    lst1.push_back(142);

    try
    {
        std::cout << easyfind(lst1, 0) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}