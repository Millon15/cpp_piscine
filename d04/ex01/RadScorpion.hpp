/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:38:18 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 17:38:34 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_hpp
#define RADSCORPION_hpp

#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion( void );
	RadScorpion( const RadScorpion & );
	~RadScorpion( void );

	RadScorpion			&operator=( const RadScorpion & );

private:


};

#endif												// end of RADSCORPION_hpp
