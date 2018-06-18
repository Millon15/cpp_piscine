/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:09:44 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/18 20:28:44 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

void	randomChump()
{
	std::string	randomName(10, rand() % 25 + 65);
	Zombie		newZombie(randomName);

	newZombie.annonce();
}

int		main( void )
{

	return 0;
}