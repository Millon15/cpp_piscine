/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:06:23 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 17:18:41 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist( const PowerFist &toCopy )
{
	*this = toCopy;
}

PowerFist::~PowerFist( void )
{
	return ;
}



PowerFist				&PowerFist::operator=( const PowerFist &toCopy )
{
	AWeapon::operator=(toCopy);

	return *this;
}


void					PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
