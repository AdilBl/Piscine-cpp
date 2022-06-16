#include "header.hpp"

int checktochar(int nb)
{
    if (nb > 127 || nb < 0)
    {
        std::cout << "char: impossible" << std::endl;
        return (0);
    }
    else
        return (1);
}

void tochar(char c)
{
    if (std::isprint(c))
    {
        std::cout<< "char: '" << c << "'"<<std::endl;
    }
    else
    {
        std::cout<< "char: " << "Non displayable" << std::endl;
    }
}