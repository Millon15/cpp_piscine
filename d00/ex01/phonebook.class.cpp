/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:18:06 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/05 23:16:16 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook( void ) : gl_ci(0)
{
	return ;
}

Phonebook::~Phonebook( void ) {
	return ;
}

void		Phonebook::add_contact( void ) {

	if (gl_ci >= 8) {
		std::cout << "There are no more space for another contacts!" \
		<< std::endl;
		return ;
	}

	std::cout << "Enter the first name: ";
	std::getline(std::cin, gl_cont[gl_ci].first_name);
	std::cout << "Enter the last name: ";
	std::getline(std::cin, gl_cont[gl_ci].last_name);
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, gl_cont[gl_ci].nickname);
	std::cout << "Enter the login: ";
	std::getline(std::cin, gl_cont[gl_ci].login);
	std::cout << "Enter the postal address: ";
	std::getline(std::cin, gl_cont[gl_ci].postal_address);
	std::cout << "Enter the email address: ";
	std::getline(std::cin, gl_cont[gl_ci].email_address);
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, gl_cont[gl_ci].phone_number);
	std::cout << "Enter the birthday date: ";
	std::getline(std::cin, gl_cont[gl_ci].birthday_date);
	std::cout << "Enter the favorite meal: ";
	std::getline(std::cin, gl_cont[gl_ci].favorite_meal);
	std::cout << "Enter the underwear color: ";
	std::getline(std::cin, gl_cont[gl_ci].underwear_color);
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, gl_cont[gl_ci].darkest_secret);

	std::cout << std::endl;
	this->gl_ci++;

}

void		Phonebook::table_out_helper( std::string str, \
			bool isstart, bool isend )
{

	if (str.length() > 10) {
		str.resize(9);
		str.resize(10, '.');
	}

	if (isstart) {
		std::cout << "|";
	}

	std::cout << std::right << std::setw(10) << str << "|";

	if (isend) {
		std::cout << std::endl;
	}
}

void		Phonebook::search_by_contacts( void ) {

	std::stringstream	to_ind;
	std::string			ind;

	std::cout << "+" << std::setw(11) << std::setfill('-') << "+" \
	<< std::setw(11) << "+" << std::setw(11) << "+" << std::setw(11) << "+" \
	<< std::endl << std::setfill(' ');

	std::cout << "|" << std::right << std::setw(10) << "Index" << "|" \
	<< std::right << std::setw(10) << "First name" << "|" \
	<< std::right << std::setw(10) << "Last name" << "|" \
	<< std::right << std::setw(10) << "Nickname" << "|" << std::endl;

	std::cout << "+" << std::setw(11) << std::setfill('-') << "+" \
	<< std::setw(11) << "+" << std::setw(11) << "+" << std::setw(11) << "+" \
	<< std::endl << std::setfill(' ');

	for ( int i = 0; i < gl_ci; i++ ) {

		to_ind << i;
		ind = to_ind.str();
		table_out_helper(ind, true, false);
		table_out_helper(gl_cont[i].first_name, false, false);
		table_out_helper(gl_cont[i].last_name, false, false);
		table_out_helper(gl_cont[i].nickname, false, true);
		to_ind.str(std::string());

	}

	std::cout << std::endl;

}