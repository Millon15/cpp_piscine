/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:19:36 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 18:43:28 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{
	return ;
}

Enemy::Enemy( int hp, const std::string &type ) : _type(type), _numHP(hp)
{
	return ;
}

Enemy::Enemy( const Enemy &toCopy )
{
	*this = toCopy;
}

Enemy::~Enemy( void )
{
	return ;
}



Enemy				&Enemy::operator=( const Enemy &toCopy )
{
	this->_numHP = toCopy._numHP;
	this->_type = toCopy._type;

	return *this;
}



std::string			Enemy::getType() const
{
	return this->_type;
}

int					Enemy::getHP() const
{
	return this->_numHP;
}



void				Enemy::takeDamage( int damage )
{
	if ( _numHP > 0 && damage > 0 ) {
		_numHP -= damage;
	}
}
