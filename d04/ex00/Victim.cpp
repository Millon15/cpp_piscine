/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:14:48 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 15:38:05 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void )
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim( std::string name ) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim( const Victim &toCopy )
{
	*this = toCopy;
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim( void )
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}



Victim				&Victim::operator=( const Victim &toCopy )
{
	this->_name = toCopy.getName();

	return *this;
}



void				Victim::getPolymorphed( void ) const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}



std::string				Victim::getName( void ) const
{
	return this->_name;
}



std::ostream			&operator<<( std::ostream &o, const Victim &v )
{
	o << "I'm " << v.getName() << " and I like otters !" << std::endl;

	return o;
}
