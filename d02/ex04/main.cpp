/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:57:19 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/22 20:54:39 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main( int ac, char *av[] )
{
	if ( ac != 2 ) {
		return 1;
	}
	std::stringstream	ss(av[1]);
	int					i;

	ss >> i;
	while (ss.eof() || ss)
	{
		std::cout << i << std::endl;
		ss >> i;
	}

	return 0;
}
