/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:34:47 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/21 23:25:09 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <cmath>

class Fixed {

public:
	Fixed( void );
	Fixed( const Fixed &toCopy );
	Fixed( const int raw );
	Fixed( const float raw );
	~Fixed( void );

	Fixed			&operator=( const Fixed &toEquate );
	Fixed			operator+( const Fixed &toAdd ) const;
	Fixed			operator-( const Fixed &toSubtract ) const;
	Fixed			operator*( const Fixed &toMultiply ) const;
	Fixed			operator/( const Fixed &toDivide ) const;

	void			operator+=( const Fixed &toAdd );
	void			operator-=( const Fixed &toSubtract );
	void			operator*=( const Fixed &toMultiply );
	void			operator/=( const Fixed &toDivide );

	Fixed			&operator++( void );
	Fixed			operator++( int );
	Fixed			&operator--( void );
	Fixed			operator--( int);

	bool			operator>( const Fixed &toCompare ) const;
	bool			operator<( const Fixed &toCompare ) const;
	bool			operator>=( const Fixed &toCompare ) const;
	bool			operator<=( const Fixed &toCompare ) const;
	bool			operator==( const Fixed &toCompare ) const;
	bool			operator!=( const Fixed &toCompare ) const;

	int				getRawBits( void ) const;
	void			setRawBits( const int raw );
	float			toFloat( void ) const;
	int				toInt( void ) const;

	static const Fixed	&min( const Fixed &f1, const Fixed &f2 );
	static const Fixed	&max( const Fixed &f1, const Fixed &f2 );

private:
	int					_val;
	static const int	_fractionalBits = 8;

};

std::ostream		&operator<<( std::ostream & o, const Fixed & fixed );

#endif
