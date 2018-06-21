/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:34:47 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/21 17:00:28 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_hpp
#define FIXED_hpp

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const & toCopy );
	Fixed( const int raw );
	Fixed( const float raw );
	~Fixed( void );

	Fixed &			operator=( Fixed const & toCopy );

	int				getRawBits( void ) const;
	void			setRawBits( const int raw );
	float			toFloat( void ) const;
	int				toInt( void ) const;

private:
	int					_val;
	static const int	_fractionalBits = 8;

};

std::ostream &		operator<<( std::ostream & o, const Fixed & fixed );

#endif
