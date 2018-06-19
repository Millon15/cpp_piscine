/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:46:32 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 19:13:59 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type_ ) : type(type_)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}


const std::string&		Weapon::getType( void ) const
{
	return type;
}

void					Weapon::setType( std::string type_ )
{
	type = type_;
}
