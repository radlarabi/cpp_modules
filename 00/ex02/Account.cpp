#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iostream>
#include <iomanip>
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
    return _nbAccounts;
}

int	Account::getTotalAmount( void ){
    return _totalAmount;
}

int	Account::getNbDeposits( void ){
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}

void Account::_displayTimestamp() {
     std::time_t currentTime = std::time(nullptr);

    std::tm* localTime = std::localtime(&currentTime);
    std::cout << std::setfill('0') << "[" 
        << localTime->tm_year + 1900 
        <<  std::setw(2) << localTime->tm_mon + 1
        << std::setw(2) << localTime->tm_mday
        << "_" 
        << std::setw(2) << localTime->tm_hour
        << std::setw(2) << localTime->tm_min 
        << std::setw(2) << localTime->tm_sec << "]";
}
void Account::displayAccountsInfos() {
        _displayTimestamp();
        std::cout << "accounts:" << _nbAccounts
                  << ";total:" << _totalAmount
                  << ";deposits:" << _totalNbDeposits
                  << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    }
Account::Account(int initial_deposit){
    _amount = initial_deposit;
    _nbAccounts++;
    _totalAmount += _amount;
    displayAccountsInfos();
    std::cout << " index:" << _accountIndex
        << ";amount:" << _amount
        << ";created" << std::endl;
}

Account::~Account() {
    _nbAccounts--;
    _totalAmount -= _amount;
    displayAccountsInfos();
    std::cout << " index:" << _accountIndex
        << ";amount:" << _amount
        << ";closed" << std::endl;
}


// --------------------------------------
void	Account::makeDeposit(int deposit) {
        _nbDeposits++;
        _totalNbDeposits++;
        _amount += deposit;
        _totalAmount += deposit;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << (_amount - deposit)
                  << ";deposit:" << deposit
                  << ";amount:" << _amount
                  << ";nb_deposits:" << _nbDeposits << std::endl;
    }
bool	Account::makeWithdrawal(int withdrawal) {
        if (_amount < withdrawal) {
            _displayTimestamp();
            std::cout << "index:" << _accountIndex
                      << ";p_amount:" << _amount
                      << ";withdrawal:refused" << std::endl;
            return false;
        }
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << (_amount + withdrawal)
                  << ";withdrawal:" << withdrawal
                  << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
}

int		Account::checkAmount() const {
        return _amount;
    }
void	Account::displayStatus() const {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                  << ";amount:" << _amount
                  << ";deposits:" << _nbDeposits
                  << ";withdrawals:" << _nbWithdrawals << std::endl;
    }
// void	Account::() {
//     std::time_t now = std::time(nullptr);
//     char timestamp[20];
//     std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", std::localtime(&now));
//     std::cout << "[" << timestamp << "] ";
// }
// --------------------------------------

// void	Account::makeDeposit(int deposit) {

// }

// bool	Account::makeWithdrawal(int withdrawal) {
    
// }

// int		Account::checkAmount() const {
    
// }

// void	Account::displayStatus() const {
    
// }

// void	Account::_displayTimestamp() {
    
// }


