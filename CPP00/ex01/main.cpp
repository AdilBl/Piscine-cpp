#include "header.hpp"

std::string stringtoupper(std::string str)
{
    int i;
    std::string tamp;

    i = 0;
    while (str[i])
        tamp += std::toupper(str[i++]);
    return (tamp);
}


int main (void)
{
    Phonebook phone;
    std::string buffer;
    while (1)
    {
        std::cout<< "Phonebook -> ";
        if(!std::getline(std::cin, buffer))
            break;
        buffer = stringtoupper(buffer);
        if (buffer.compare("ADD") == 0)
            phone.Add();
        else if (buffer.compare("SEARCH") == 0)
            phone.Search();
        else if (buffer.compare("EXIT") == 0)
        {
            std::cout << "Exit" << std::endl;
            break;
        }
    }
    return (0);
}