/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:52:14 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/07 18:32:09 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <iostream>
# include <string>
# include <iomanip>

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

void    Account::displayStatus(void) const
{
    std::cout << "[19920104_091532] " << std::endl;
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

