/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:49:10 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 18:42:51 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon {

public:
	AWeapon( void );
	AWeapon( const std::string &name, int apcost, int damage );
	AWeapon( const AWeapon & );
	virtual ~AWeapon( void );

	AWeapon			&operator=( const AWeapon & );

	std::string		getName( void ) const;
	int				getAPCost( void ) const;
	int				getDamage( void ) const;

	virtual void	attack( void ) const = 0;

private:
	std::string		_name;
	std::string		_attackOutput;
	int				_apcost;
	int				_damage;

};

#endif												// end of AWEAPON_HPP
