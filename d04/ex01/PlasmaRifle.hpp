/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:56:43 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 17:10:53 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle( void );
	PlasmaRifle( const PlasmaRifle & );
	~PlasmaRifle( void );

	PlasmaRifle			&operator=( const PlasmaRifle & );

	virtual void		attack( void ) const;

};

#endif												// end of PLASMARIFLE_HPP
