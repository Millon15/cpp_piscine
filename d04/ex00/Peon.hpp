/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:29:07 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 15:41:44 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Peon_hpp
#define Peon_hpp

#include "Victim.hpp"

class Peon : public Victim {

public:
	Peon( void );
	Peon( std::string );
	Peon( const Peon & );
	~Peon( void );

	Peon			&operator=( const Peon & );

	virtual void	getPolymorphed( void ) const;

};

#endif																	// end of Peon_hpp
