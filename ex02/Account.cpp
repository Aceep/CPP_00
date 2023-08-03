#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	_displayTimestamp( void )
{

}

Account::Account( int initial_deposit )
{
    _nbAccounts ++;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    
}

Account::~Account(void)
{
    _nbAccounts --;
    std::cout << "Account number " << _accountIndex << " is closed" << std::endl;
}
int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
    return _totalAmount;
}
int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "Number Account : " << getNbAccounts() << std::endl;
    std::cout << "Total Amount : " << getTotalAmount() << std::endl;
    std::cout << "Total Deposits : " << getNbDeposits() << std::endl;
    std::cout << "Total Withdrawal : " << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _amount += deposit;
    _nbDeposits ++;
    _totalAmount += deposit;
    _totalNbDeposits ++;
    std::cout << "Account number : " << _accountIndex << std::endl;
    std::cout << "Deposit : " << deposit << std::endl;
    std::cout << "New amount : " << _amount << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > _amount)
        return false;
    _amount -= withdrawal;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return  _amount;
}
	
void	Account::displayStatus( void ) const
{

}