/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:37:11 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/18 20:10:56 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombieEvent_hpp
#define ZombieEvent_hpp

#include "Zombie.hpp"

class ZombieEvent {

public:
	ZombieEvent( void );
	~ZombieEvent( void );

	void		setZombieType( Zombie* theZombie, std::string type );
	Zombie*		newZombie( std::string name );

private:
	std::string	_defaultType;

};

#endif
