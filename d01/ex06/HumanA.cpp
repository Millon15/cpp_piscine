/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:58:04 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 19:16:21 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, const Weapon& type ) : _name(name), _weapon(type)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}



void				HumanA::attack( void ) const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
