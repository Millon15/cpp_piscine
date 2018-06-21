/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:34:47 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/21 15:59:46 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_hpp
#define FIXED_hpp

#include <iostream>

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const & toCopy );
	~Fixed( void );

	Fixed &			operator=( Fixed const & toCopy );

	int				getRawBits( void ) const;
	void			setRawBits( int const raw );

private:
	int					_rawBits;
	static const int	_fractionalBits = 8;

};

#endif
