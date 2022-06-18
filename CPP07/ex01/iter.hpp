#include <iostream>
#include <string>

template <typename T, typename function>

void iter(T *tab, int size, function * f)
{
    if (!tab || !f)
    {
        std::cout << "Error" << std::endl;
        return;
    }
    for(int i = 0; i < size; i++)
    {
        f(tab[i]);
    }
    return;
}