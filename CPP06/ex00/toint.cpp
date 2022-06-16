#include "header.hpp"


void toint(long nb)
{
    if (nb > 2147483647 || nb < -2147483648)
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    else
        std::cout << "int: " << nb << std::endl;
    return;
}