#include <iostream>
#include <string>
#include "account.class.hpp"


int main ()
{

    std::cout << Bank::NombreDeCompte << std::endl;

    Bank test = Bank();

    std::cout << Bank::NombreDeCompte << std::endl;

    Bank tout = Bank();

    std::cout << Bank::NombreDeCompte << std::endl;
    
    return 0;
}
