#include "account.class.hpp"

int Bank::NombreDeCompte = 0;

Bank::Bank(/* args */)
{
    Bank::NombreDeCompte++;
}

Bank::~Bank()
{
    Bank::NombreDeCompte--;
}
