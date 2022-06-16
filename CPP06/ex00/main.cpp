#include "header.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid Argument Number" << std::endl;
        return(0);
    }
    try
    {
        if (checktochar(static_cast<int>(std::stof(argv[argc - 1]))))
            tochar(static_cast<char>(static_cast<int>(std::stof(argv[argc - 1]))));
        toint(static_cast<long>(std::stof(argv[argc - 1])));
        tofloat(static_cast<float>(std::stof(argv[argc - 1])));
        todouble(static_cast<double>(std::stof(argv[argc - 1])));
    }
    catch(std::out_of_range & bc)
    {
        std::cout << "Error de cast " << bc.what() << std::endl;
    }
}