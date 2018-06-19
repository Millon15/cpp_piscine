/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:30:47 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 13:38:38 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::Zombie( std::string name, std::string type ) : _name(name), _type(type)
{
	return ;
}

Zombie::~Zombie( void )
{
	return ;
}



void	Zombie::setName( std::string name )
{
	_name = name;
}

void	Zombie::setType( std::string type )
{
	_type = type;
}

void	Zombie::annonce( void )
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
