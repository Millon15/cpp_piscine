/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:34:17 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 17:36:40 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_hpp
#define SUPERMUTANT_hpp

#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant( void );
	SuperMutant( const SuperMutant & );
	~SuperMutant( void );

	SuperMutant			&operator=( const SuperMutant & );

	virtual void		takeDamage( int );

};

#endif												// end of SUPERMUTANT_hpp
