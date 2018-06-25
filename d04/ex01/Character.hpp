/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:40:22 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 18:42:43 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {

public:
	Character( void );
	Character( const std::string &name );
	Character( const Character & );
	~Character( void );

	Character			&operator=( const Character & );

	std::string			getName( void ) const;
	int					getAP( void ) const;
	AWeapon				*getWeapon( void ) const;

	void				recoverAP( void );
	void				equip( AWeapon * );
	void				attack( Enemy * );

private:
	std::string		_name;
	int				_numAP;
	AWeapon			*_weapon;

};

std::ostream		&operator<<( std::ostream &, const Character & );

#endif												// end of CHARACTER_HPP
