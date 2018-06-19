/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:53:46 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 22:11:13 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#define BUFF_SIZE 4096

int		main( int ac, char **av )
{
	if ( ac != 4 || !strlen(av[1]) || !strlen(av[2]) || !strlen(av[3]) )
	{
		std::cerr << "Some error occurred: not valid arguments" << std::endl;
		std::cerr << "usage: ./replace file_name string_to_find string_to_replace_with" << std::endl;
		return 1;
	}

	const std::string		fileName(av[1]);
	const std::string		toFind(av[2]);
	const std::string		toReplace(av[3]);
	std::ifstream			fileToFindIn(fileName);
	std::ofstream			fileToWriteReplacements(fileName + ".replace");
	std::stringstream		ss;
	std::string				s;
	char					buffer[BUFF_SIZE];

	if ( !fileToFindIn || !fileToWriteReplacements )
	{
		std::cerr << "Some error occurred: not valid arguments" << std::endl;
		std::cerr << "usage: ./replace file_name string_to_find string_to_replace_with" << std::endl;
		return 2;
	}

	do {

		if ( ss.fail() ) {
			std::cerr << "Some error occurred: Logical error on i/o operation OR read/writing error on i/o operation" << std::endl;
			return 2;
		}
		fileToFindIn.read(buffer, BUFF_SIZE);
		ss << buffer;

	} while( ( fileToFindIn.gcount() && !fileToFindIn.eof() ) || ss.fail() );

	s = ss.str();

	for ( 
		size_t pos = s.find(toFind);
		pos != s.npos;
		pos = s.find(toFind, pos + 1)
	)
	{
		s.replace( pos, toReplace.length() - 1, toReplace );
	}

	fileToWriteReplacements	<< s;

	return 0;
}
