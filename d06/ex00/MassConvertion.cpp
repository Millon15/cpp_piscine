/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MassConvertion.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:25:57 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/26 17:41:44 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MassConvertion.hpp>

MassConvertion::MassConvertion( void )
{
	return ;
}

MassConvertion::MassConvertion( const MassConvertion &toCopy )
{
	*this = toCopy;
}

MassConvertion::~MassConvertion( void )
{
	return ;
}

MassConvertion				&MassConvertion::operator=( const MassConvertion &toCopy )
{
	static_cast<void>(toCopy);

	return *this;
}




void						MassConvertion::check( double toCheck ) const
{
	const int		classification = fpclassify(toCheck);

	if (	classification == FP_SUBNORMAL ||
			classification == FP_INFINITE ||
			classification == FP_NAN )
	{
		throw MassConvertion::impossible();
	}
}

char						MassConvertion::convToChar( double toConv )
{
	check(toConv);
	if ( toConv > static_cast<double>(CHAR_MAX) || toConv < static_cast<double>(CHAR_MIN) ) {
		throw MassConvertion::impossible();
	}
	else if ( !isprint(static_cast<char>(toConv)) ) {
		throw MassConvertion::nonDisplayable();
	}

	return static_cast<char>(toConv);
}

int							MassConvertion::convToInt( double toConv )
{
	check(toConv);
	if ( toConv > static_cast<double>(INT_MAX) || toConv < static_cast<double>(INT_MIN) ) {
		throw MassConvertion::impossible();
	}

	return static_cast<int>(toConv);
}

float						MassConvertion::convToFloat( double toConv )
{
	check(toConv);

	return static_cast<float>(toConv);
}

double						MassConvertion::convToDouble( double toConv )
{
	check(toConv);

	return toConv;
}



MassConvertion::nonDisplayable::nonDisplayable( void )
{
	return ;
}

MassConvertion::nonDisplayable::nonDisplayable( const nonDisplayable &toCopy )
{
	*this = toCopy;
}

MassConvertion::nonDisplayable::~nonDisplayable( void ) throw()
{
	return ;
}

MassConvertion::nonDisplayable		&MassConvertion::nonDisplayable::operator=( const nonDisplayable &toCopy )
{
	static_cast<void>(toCopy);

	return *this;
}

const char					*MassConvertion::nonDisplayable::what( void ) const throw()
{
	return "Non displayable";
}



MassConvertion::impossible::impossible( void )
{
	return ;
}

MassConvertion::impossible::impossible( const impossible &toCopy )
{
	*this = toCopy;
}

MassConvertion::impossible::~impossible( void ) throw()
{
	return ;
}

MassConvertion::impossible		&MassConvertion::impossible::operator=( const impossible &toCopy )
{
	static_cast<void>(toCopy);

	return *this;
}

const char					*MassConvertion::impossible::what( void ) const throw()
{
	return "impossible";
}
