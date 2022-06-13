#include "header.hpp"

int main()
{
    Bureaucrat test = Bureaucrat("Adil", 150);
    Bureaucrat oui = Bureaucrat(test);

    std::cout << oui << std::endl; 
}