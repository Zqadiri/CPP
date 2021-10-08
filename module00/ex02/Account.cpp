/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:52:14 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/08 13:22:15 by zqadiri          ###   ########.fr       */
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
    Constructors & deconstructor
*/


Account::Account(void){}

Account::Account(int initial_deposit){
    initial_deposit = 0;
}

Account::~Account(void){}

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

void    Account::displayStatus(void) const
{
    std::time_t t = std::time(NULL);
    std::tm* timeptr = localtime(&t);
    std::cout   << std::setfill('0') 
                << "["
                << timeptr->tm_year  + 1900 
                << std::setw(2) << std::setfill('0') << timeptr->tm_mon 
                << std::setw(2) << std::setfill('0') << timeptr->tm_mday
                << "_"
                << std::setw(2) << std::setfill('0') << timeptr->tm_hour
                << std::setw(2) << std::setfill('0') << timeptr->tm_min
                << std::setw(2) << std::setfill('0') << timeptr->tm_sec  
                << "]"<< std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    withdrawal = 0;
    return (true);
}

void	Account::displayAccountsInfos( void )
{
    
}

void	Account::makeDeposit( int deposit )
{
    deposit = 0;
}

