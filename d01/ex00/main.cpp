/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:44:04 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 13:57:34 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <cstdlib>

static void	ponyOnTheHeap( void )
{
	const Pony*	Karl = new Pony(true);

	std::cout << "Karl is " << (Karl->isUnicorn ? "unicorn" : "pony") << std::endl;

	delete Karl;
}

static void	ponyOnTheStack( void )
{
	const Pony	Piter;

	std::cout << "Piter is " << (Piter.isUnicorn ? "unicorn" : "pony") << std::endl;
}

int		main( void )
{
	ponyOnTheHeap();
	ponyOnTheStack();

	system("leaks -q a.out");
	return 0;
}
