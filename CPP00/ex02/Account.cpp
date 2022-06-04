#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit )
{
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += this->_amount;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout<< "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}


void Account::_displayTimestamp(void)
{
    std::time_t result = std::time(nullptr);
    std::tm tm = *std::localtime(&result);

    std::cout << "[";
    std::cout << std::setw(4) << std::setfill ('0') << tm.tm_year + 1900;
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_mon;
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_mday;
    std::cout << "";
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_hour;
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_min;
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_sec;
    std::cout << "] ";
}

void Account::displayStatus (void) const
{
    Account::_displayTimestamp();
    std::cout<< "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::checkAmount (void) const
{
    return(0);
}

void Account::displayAccountsInfos (void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit (int deposit)
{
    Account::_displayTimestamp();
    std::cout<< "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
    Account::_totalAmount += deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << ";amount:" << this->_amount << ";nbdeposits:" << this->_nbDeposits << std::endl;
    
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    if (this->_amount - withdrawal < 0)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return(false);
    }
    else 
    {
        std::cout << ";withdrawal:" << withdrawal;
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    }
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    Account::_displayTimestamp();
    std::cout<< "index:" << this->_accountIndex << ";ammount:" << this->_amount << ";closed" << std::endl; 
}

Account::Account(void)
{
}

int Account::getNbAccounts(void)
{
    return(Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return(Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return(Account::_totalNbDeposits);
}