#include <iostream>
#include <string>
#include <list>

template <typename T>

int easyfind(T const & tab, int find)
{
    int i = 0;
    std::list <int>::const_iterator it = tab.begin();
    std::list <int>::const_iterator size = tab.end();

    while (it != size)
    {
        if (*it == find)
            return(i);
        i++;
        it++;
    }
    throw std::exception();
}