/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:34:09 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 17:37:35 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant &toCopy )
{
	*this = toCopy;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh ..." << std::endl;
}



SuperMutant				&SuperMutant::operator=( const SuperMutant &toCopy )
{
	Enemy::operator=(toCopy);

	return *this;
}



void					SuperMutant::takeDamage( int damage )
{
	damage -= 3;
	Enemy::takeDamage(damage);
}

