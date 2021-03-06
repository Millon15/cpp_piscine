/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:37:11 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 13:28:39 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombieEvent_hpp
#define ZombieEvent_hpp

#include "Zombie.hpp"
#include <cstdlib>

class ZombieEvent {

public:
	ZombieEvent( void );
	~ZombieEvent( void );

	void			setZombieType( Zombie* theZombie, std::string type );
	Zombie*			newZombie( std::string name, std::string type );
	void			randomChump( void );

private:
	std::string		makeRandomString( bool startFromCapital );

};

#endif
