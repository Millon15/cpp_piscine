/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:57:19 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/21 21:26:08 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main( void )
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	// {
	// 	std::cout << std:endl;
	// 	Fixed			a(2);
	// 	Fixed			c(2);

	// 	++a++;
	// 	std::cout << a << std::endl;
	// 	a--;
	// 	std::cout << ++a << std::endl;
	// 	std::cout << (a + c) << std::endl;
	// 	std::cout << (a - c) << std::endl;
	// 	std::cout << (a * c) << std::endl;
	// 	std::cout << (a / c) << std::endl;
	// 	++a;
	// 	std::cout << a << std::endl;
	// 	std::cout << a << std::endl;
	// }

	return 0;
}
