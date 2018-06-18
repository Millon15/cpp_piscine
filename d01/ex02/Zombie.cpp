/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:30:47 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/18 19:48:09 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
	return ;
}

Zombie::~Zombie( void )
{
	return ;
}

void	Zombie::annonce( void )
{
	std::cout << "<" << _name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
