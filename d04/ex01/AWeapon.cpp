/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:50:54 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 15:54:55 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
	return ;
}

AWeapon::AWeapon( const std::string &name, int apcost, int damage ) : 
	_name(name),
	_apcost(apcost),
	_damage(damage)
{
	return ;
}

AWeapon::AWeapon( const AWeapon &toCopy )
{
	*this = toCopy;
}

AWeapon::~AWeapon( void )
{
	return ;
}



AWeapon				&AWeapon::operator=( const AWeapon &toCopy )
{
	this->_name = toCopy._name;
	this->_apcost = toCopy._apcost;
	this->_damage = toCopy._damage;

	return *this;
}



std::string		AWeapon::getName( void ) const
{
	return this->_name;
}

int				AWeapon::getAPCost( void ) const
{
	return this->_apcost;
}

int				AWeapon::getDamage( void ) const
{
	return this->_damage;
}
