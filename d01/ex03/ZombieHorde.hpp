/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:35:42 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 13:51:49 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombieHorde_hpp
#define ZombieHorde_hpp

#include "Zombie.hpp"

class ZombieHorde {

public:
	ZombieHorde( int N );
	~ZombieHorde( void );

	void			annonce( void );

private:
	int			_numberOfZombies;
	Zombie*		_zombies;

	std::string		makeRandomString( bool startFromCapital );

};

#endif
