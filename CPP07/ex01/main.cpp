#include "iter.hpp"


void print(int value)
{
    std::cout << value << std::endl;
}

void printstr(std::string value)
{
    std::cout << value << std::endl;
}

int main()
{
    int liste[] = {2,4,2,5,978,2};
    std::string str[5] = {"Phrase1","Phrase2","Phrase3","Phrase4","Phrase5" };
    iter(liste, 6, print);
    iter(str, 5, printstr);
    return 0;
}