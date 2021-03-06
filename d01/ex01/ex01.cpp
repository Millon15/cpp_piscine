/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 18:41:12 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 18:10:45 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak( void )
{
	std::string*		panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}

int		main( void )
{
	memoryLeak();

	system("leaks -q a.out");
	return 0;
}
