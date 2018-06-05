/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:17:55 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/05 14:11:27 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class Phonebook {

public:
	Phonebook( void );
	~Phonebook( void );

	void			add_contact( void );
	void			search_by_contacts( void );

private:
	typedef	struct	contact {
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		login;
		std::string		postal_address;
		std::string		email_address;
		std::string		phone_number;
		std::string		birthday_date;
		std::string		favorite_meal;
		std::string		underwear_color;
		std::string		darkest_secret;
	}				t_con;

	int				gl_ci;
	t_con			gl_cont[8];

	void			table_out_helper( std::string str, \
					bool isstart, bool isend );

};

#endif