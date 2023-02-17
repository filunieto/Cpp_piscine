/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:48:33 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/17 23:56:10 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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

void Account::_displayTimestamp(void)
{
	std::time_t primary_instant;
	std::tm	*actual_instant;
	char	print[20];

	primary_instant = std::time(NULL);
	actual_instant = std::localtime(&primary_instant);
	std::strftime(print, sizeof(print), "[%Y%m%d_%H%M%S]", actual_instant);
}
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0 
void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts  << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	// std::cout << "index:" << _accountIndex  << ";"; //da un error?
	std::cout << std::endl;
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts = _nbAccounts + 1;
	_totalAmount = initial_deposit;
	_amount =  _amount + initial_deposit;
	std::cout << "index:" << _nbAccounts  << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created";
	std::cout << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts  << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed";
	std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << "index:" << _accountIndex  << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	_amount =  _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}



bool Account::makeWithdrawal(int withdrawal)
{
	//comprobar si la cantidad es positiva 
	// y aagregra y actualizar parametrosç
	// sin no
	// [19920104_091532] index:5;p_amount:23;withdrawal:refused
}



int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex  << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}