#include "header.hpp"

int main (void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *pstr = &str;
    std::string &rstr = str;

    std::cout << "String Variable: " << str << std::endl;
    std::cout << "String Pointeur: "<< *pstr << std::endl;
    std::cout << "String Reference: "<< rstr << std::endl;

    std::cout << std::endl;

    std::cout << "String Variable: "<< &str << std::endl;
    std::cout << "String Pointeur: "<< pstr << std::endl;
    std::cout << "String Reference: "<< &rstr << std::endl;
}