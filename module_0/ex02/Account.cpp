/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:25:24 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/02 12:37:14 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit) {
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
    Account::_nbAccounts += 1;
    Account::_totalAmount += this->_amount;
}

void    Account::_displayTimestamp(void) {
    time_t time;
    time = std::time(NULL);
    tm *local_time = std::localtime(&time);
    std::cout << "["
                << local_time->tm_year + 1900
                << 1 + local_time->tm_mon 
                << local_time->tm_mday
                << "_" 
                << local_time->tm_hour
                << local_time->tm_min 
                << local_time->tm_sec << "] ";
}

void    Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit){
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount + deposit << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits + 1 << std::endl;
    Account::_totalNbDeposits += 1;
    Account::_totalAmount += deposit;
    this->_nbDeposits += 1;
    this->_amount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (this->_amount >= withdrawal)
    {
        std::cout << "withdrawal:" << withdrawal << ";";
        this->_amount -= withdrawal;
        this->_nbWithdrawals += 1;
        Account::_totalNbWithdrawals += 1;
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        Account::_totalAmount -= withdrawal;
        return (true);
    }
    std::cout << "withdrawal:" << "refused" << std::endl;
    return (false);
}

int Account::checkAmount(void) const{
    std::cout << "here something" << std::endl;
    return (0);
}

void    Account::displayStatus(void) const{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl; 
}

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}