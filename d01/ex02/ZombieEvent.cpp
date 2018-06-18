/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:41:38 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/18 20:08:36 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
	std::cout << "Please, type the default Zombie type: ";
	std::cin >> _defaultType;
}

ZombieEvent::~ZombieEvent( void )
{
	return ;
}

void		ZombieEvent::setZombieType( Zombie* theZombie, std::string type )
{
	theZombie->type = type;
}

Zombie*		ZombieEvent::newZombie( std::string name )
{
	Zombie*	newZombie = new Zombie(name);

	newZombie->type = _defaultType;

	return newZombie;
}
