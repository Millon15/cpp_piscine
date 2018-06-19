/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:57:42 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 19:16:14 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_hpp
#define HumanA_hpp

#include "Weapon.hpp"
#include <iostream>

class HumanA {

public:
	HumanA( std::string name, const Weapon& type );
	~HumanA( void );

	void				attack( void ) const;

private:
	const std::string	_name;
	const Weapon&		_weapon;

};

#endif
