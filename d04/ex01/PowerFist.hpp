/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:06:24 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 17:18:50 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist( void );
	PowerFist( const PowerFist & );
	~PowerFist( void );

	PowerFist			&operator=( const PowerFist & );

	virtual void		attack( void ) const;

};

#endif												// end of POWERFIST_HPP
