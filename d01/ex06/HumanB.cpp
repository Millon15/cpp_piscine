/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:57:11 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 19:37:28 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}


void				HumanB::attack( void ) const
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void				HumanB::setWeapon( Weapon& someWeapon )
{
	_weapon = &someWeapon;
}
