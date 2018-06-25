/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:58:05 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 15:30:11 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sorcerer_hpp
#define Sorcerer_hpp

#include "Victim.hpp"

class Sorcerer {

public:
	Sorcerer( void );
	Sorcerer( std::string name, std::string title );
	Sorcerer( const Sorcerer &toCopy );
	~Sorcerer( void );

	Sorcerer			&operator=( const Sorcerer &toCopy );

	void				polymorph( const Victim & );

	std::string			getName( void ) const;
	std::string			getTitle( void ) const;

private:
	std::string		_name;
	std::string		_title;

};

std::ostream			&operator<<( std::ostream &o, const Sorcerer &s );

#endif																	// end of Sorcerer_hpp
