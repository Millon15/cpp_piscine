/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:14:51 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 15:42:23 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Victim_hpp
#define Victim_hpp

#include <string>
#include <iostream>

class Victim {

public:
	Victim( void );
	Victim( std::string );
	Victim( const Victim & );
	~Victim( void );

	Victim			&operator=( const Victim & );

	virtual void	getPolymorphed( void ) const;

	std::string		getName( void ) const;

protected:
	std::string		_name;

};

std::ostream			&operator<<( std::ostream &, const Victim & );

#endif																	// end of Victim_hpp
