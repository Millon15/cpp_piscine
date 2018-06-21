/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 16:22:57 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/20 21:37:17 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstdio>

void	readFromCIN( void )
{
	while ( std::cout << std::cin.rdbuf() );
	std::cin.clear();
	std::cout.clear();
	freopen(NULL, "r", stdin);
	freopen(NULL, "w", stdout);
}
		
int		main( int ac, char** av )
{
	int				i(1);
	std::ifstream	ifs;

	if ( ac == 1 ) {
		readFromCIN();
	}
	while ( i < ac ) {
		if ( av[i][0] == '-' && av[i][1] == '\0' ) {
			readFromCIN();
		}
		else {
			ifs.open(av[i], std::ifstream::binary);
			if ( !ifs ) {
				std::cerr << "cato9tails: " << av[i] << ": No such file or directory" << std::endl;
			}
			else {
				std::cout << ifs.rdbuf();
				ifs.close();
			}
		}
		i++;
	}

	return 0;
}
