#include "Account.hpp"
#include <iostream>
#include <chrono>

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
void Account::displayAccountsInfos() {
        _displayTimestamp();
        std::cout << "accounts:" << _nbAccounts
                  << ";total:" << _totalAmount
                  << ";deposits:" << _totalNbDeposits
                  << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    }
Account::Account(int initial_deposit)
        : _accountIndex(_nbAccounts),
          _amount(initial_deposit),
          _nbDeposits(0),
          _nbWithdrawals(0) {
        _nbAccounts++;
        _totalAmount += _amount;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                  << ";amount:" << _amount
                  << ";created" << std::endl;
    }
Account::~Account() {
        _nbAccounts--;
        _totalAmount -= _amount;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                  << ";amount:" << _amount
                  << ";closed" << std::endl;
    }
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
void	Account::_displayTimestamp() {
    std::time_t now = std::time(nullptr);
    char timestamp[20];
    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", std::localtime(&now));
    std::cout << "[" << timestamp << "] ";
}


