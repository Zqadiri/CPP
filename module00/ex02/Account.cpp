/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:52:14 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/08 13:01:12 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

Account::Account()
{

}

Account::Account(int initial_deposit)
{
    initial_deposit = 0;
}

Account::~Account()
{
    
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

