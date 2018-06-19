/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:37:30 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 13:55:14 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main( void )
{
	ZombieHorde		horde(10);

	horde.annonce();

	system("leaks -q a.out");
	return 0;
}
