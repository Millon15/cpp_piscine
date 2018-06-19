/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:09:44 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 13:40:14 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main( void )
{
	ZombieEvent		ZombieEvent;
	Zombie			Foo("Foo", "beer");
	Zombie*			Karl = ZombieEvent.newZombie("Karl", "killer");

	ZombieEvent.setZombieType( &Foo, "bar");
	Foo.annonce();
	Karl->annonce();
	ZombieEvent.randomChump();
	ZombieEvent.randomChump();
	ZombieEvent.randomChump();

	delete Karl;

	system("leaks -q a.out");
	return 0;
}
