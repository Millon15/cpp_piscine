/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:56:41 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 18:38:33 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle &toCopy )
{
	*this = toCopy;
}

PlasmaRifle::~PlasmaRifle( void )
{
	return ;
}



PlasmaRifle				&PlasmaRifle::operator=( const PlasmaRifle &toCopy )
{
	AWeapon::operator=(toCopy);

	return *this;
}


void					PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
