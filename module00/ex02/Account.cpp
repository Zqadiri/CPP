/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:52:14 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/10 18:53:54 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

/*
    a static variable inside a class should be initialized explicitly 
    by the user using the class name 
    and scope resolution operator outside the class 
*/

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*
    Constructors & destructor
*/


Account::Account(void)
{
    this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}

/*
    index:0;amount:42;created
    index++  _amount=initial_deposit  created         
*/

Account::Account(int initial_deposit) {
    // std::cout << "Constructor output\n";
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void){
	Account::_displayTimestamp();
	// this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

/*
    Getters
*/

int	Account::getNbAccounts( void ){
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ){
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void ){
    return Account::_totalNbDeposits;
}
int	Account::getNbWithdrawals( void ){
    return Account::_totalNbWithdrawals;
}

/*
    [19920104_091532]
    year month day _ hour min sec
*/

/*
    The localtime() function takes a pointer of 
    type time_t as its argument and returns a pointer 
    object of structure tm .
    localtime() function converts the given time since epoch to calendar 
    time which is expressed as local time .
*/

void	Account::_displayTimestamp( void )
{
    // std::time_t t = std::time(NULL);
    // std::tm* timeptr = localtime(&t);
    // std::cout   << std::setfill('0') 
    //             << "["
    //             << timeptr->tm_year  + 1900 
    //             << std::setw(2) << std::setfill('0') << timeptr->tm_mon 
    //             << std::setw(2) << std::setfill('0') << timeptr->tm_mday
    //             << "_"
    //             << std::setw(2) << std::setfill('0') << timeptr->tm_hour
    //             << std::setw(2) << std::setfill('0') << timeptr->tm_min
    //             << std::setw(2) << std::setfill('0') << timeptr->tm_sec  
    //             << "]";
    std::cout << "[19920104_091532]";
}

void    Account::displayStatus(void) const
{
    // std::cout << "displayStatus";
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits
                << ";withdrawals:"<< _nbWithdrawals
                << std::endl;
}

void	Account::displayAccountsInfos(void)
{
    // std::cout << "displayAccountsInfos";
    Account::_displayTimestamp();
    std::cout << " accounts:" << _nbAccounts
                << ";total:" << _totalAmount
                << ";deposits:" << _totalNbDeposits
                << ";withdrawals:"<< _totalNbWithdrawals
                << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" <<  this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" <<  this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}
