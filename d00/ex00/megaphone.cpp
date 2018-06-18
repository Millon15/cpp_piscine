/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:18:21 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/18 13:35:54 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main( int ac, char **av ) {

	int		length;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}

	for ( size_t i = 1; i < ac; i++ ) {

		length = strlen(av[i]);
		for ( size_t g = 0; g < length; g++ ) {
			av[i][g] = toupper( av[i][g] );
		}

		std::cout << av[i];

	}
	std::cout << std::endl;

	return 0;

}