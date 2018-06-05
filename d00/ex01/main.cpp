/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:18:02 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/05 14:16:54 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int			main( void )
{

	std::string		command;
	Phonebook		instance;

	while (std::cin) {
		std::cout << "Please, enter the command: ";
		std::getline(std::cin, command);
		if ( command == "EXIT" ) return 1;
		else if ( command == "ADD" ) instance.add_contact();
		else if ( command == "SEARCH" ) instance.search_by_contacts();
	}
	// std::cout << "^D" << std::endl;
	(std::operator<<(std::cout, "^D")).operator<<(std::endl);
	
	return 0;

}