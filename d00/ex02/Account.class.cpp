/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 17:06:01 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/05 23:36:59 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./resources/Account.class.hpp"
#include <iostream>
#include <chrono>

int			Account::_nbAccounts(0);
int			Account::_totalAmount(0);
int			Account::_totalNbDeposits(0);
int			Account::_totalNbWithdrawals(0);


Account::Account( int initial_deposit ) : 
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_totalAmount += initial_deposit;

	std::cout \
	<< "index:" << _nbAccounts \
	<< ";amount:" << initial_deposit \
	<< ";created" << std::endl;

	_nbAccounts++;
}

Account::~Account( void )
{
	_nbAccounts--;

	std::cout \
	<< "index:" << _nbAccounts \
	<< ";amount:" << _amount \
	<< ";closed" << std::endl;
}



void		Account::displayAccountsInfos( void )
{
	std::cout \
	<< "accounts:" << _nbAccounts \
	<< ";total:" << _totalAmount \
	<< ";deposits:" << _totalNbDeposits \
	<< ";withdrawals:" << _totalNbWithdrawals \
	<< std::endl;
}

void		Account::makeDeposit( int deposit )
{
	std::cout \
	<< "index:" << _accountIndex \
	<< ";p_amount:" << _amount \
	<< ";deposit:" << deposit;

	_amount += deposit;
	_nbDeposits++;

	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout \
	<< ";amount:" << _amount \
	<< ";nb_deposits:" << _nbDeposits \
	<< std::endl;
}

bool		Account::makeWithdrawal( int withdrawal )
{
	std::cout << "index:" << _accountIndex \
	<< ";p_amount:" << _amount << ";withdrawal:";

	if (_amount < withdrawal) {
		std::cout << "refused" << std::endl;
		return false;
	}
	else {
		_amount -= withdrawal;
		_nbWithdrawals++;

		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
	}

	std::cout << withdrawal << ";amount:" << _amount \
	<< ";nb_withdrawals:" << 1 << std::endl;

	return true;
}

void		Account::displayStatus( void ) const
{
	std::cout \
	<< "index:" << _accountIndex \
	<< ";amount:" << _amount \
	<< ";deposits:" << _nbDeposits \
	<< ";withdrawals:" << _nbWithdrawals \
	<< std::endl;
}



int			Account::getNbAccounts( void ) { return _nbAccounts; }
int			Account::getTotalAmount( void ) { return _totalAmount; }
int			Account::getNbDeposits( void ) { return _totalNbDeposits; }
int			Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }

int			Account::checkAmount( void ) const { return _amount; }

void		Account::_displayTimestamp( void )
{
	using namespace std::chrono;
	long ms = duration_cast<milliseconds> (system_clock::now().time_since_epoch()).count();
	std::cout << ms << std::endl;
}
