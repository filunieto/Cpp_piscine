/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:48:33 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/19 14:38:33 by fnieves          ###   ########.fr       */
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
	std::time_t t;
	std::tm* actual_instant;
	char buffer[128];


	time(&t); //declara una estructura  tiempo . Podriamos también 	t = std::time(NULL); inicializada a NULL.
	actual_instant = std::localtime(&t); //guarda en s (EPOCH) el instante actual
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", actual_instant);
	std::cout << buffer;
}
	
	// std::time_t primary_instant;
	// std::tm	*actual_instant;
	// char	print[20];

	// primary_instant = std::time(NULL);
	// actual_instant = std::localtime(&primary_instant);
	// std::strftime(print, sizeof(print), "[%Y%m%d_%H%M%S]", actual_instant);


void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts  << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	
	this->_accountIndex = _nbAccounts;
	_nbAccounts = _nbAccounts + 1;
	_amount =  _amount + initial_deposit;
	_totalAmount = _totalAmount + _amount ;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created";
	std::cout << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
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
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount =  _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}


bool Account::makeWithdrawal(int withdrawal)
{
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex  << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal >= 0 && _amount >= withdrawal)
	{
		_nbWithdrawals += 1;
		_amount =  _amount - withdrawal;
		_totalAmount = _totalAmount - withdrawal;
		_totalNbWithdrawals += 1;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << ";" << std::endl;;
		return (true);
	}
	else
		std::cout << "withdrawal:refused" << std::endl;
	return (false);
}


int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex  << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}