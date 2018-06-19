/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:57:14 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 19:32:36 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_hpp
#define HumanB_hpp

#include "Weapon.hpp"
#include <iostream>

class HumanB {

public:
	HumanB( std::string name );
	~HumanB( void );

	void				attack( void ) const;
	void				setWeapon( Weapon& someWeapon );

private:
	const std::string	_name;
	Weapon*				_weapon;

};

#endif
