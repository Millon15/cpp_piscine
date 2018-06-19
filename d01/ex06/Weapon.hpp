/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:46:26 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 19:14:08 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_hpp
#define Weapon_hpp

#include <string>

class Weapon {

public:
	Weapon( std::string type_ );
	~Weapon( void );

	const std::string&	getType( void ) const;
	void				setType( std::string type_ );

private:
	std::string			type;

};

#endif
