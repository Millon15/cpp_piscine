/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:52:36 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/21 16:01:56 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & toCopy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}



Fixed &			Fixed::operator=( Fixed const & toCopy )
{
	std::cout << "Assignation operator called" << std::endl;
	
	this->_rawBits = toCopy.getRawBits();

	return *this;
}

int				Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void			Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}
