/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:48:33 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/17 18:06:15 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
}

Account::~Account( void )
{
	
}
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0 
void Account::displayAccountsInfos(void)
{
	
}


void Account::_displayTimestamp(void)
{
	
}

bool Account::makeWithdrawal(int withdrawal)
{
	
}

void Account::makeDeposit(int deposit)
{
	
}

