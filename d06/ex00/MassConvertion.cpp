/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MassConvertion.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:25:57 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/26 22:02:12 by vbrazas          ###   ########.fr       */
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




void						MassConvertion::checkFloat( double toCheck ) const
{
	const int		classification = fpclassify(toCheck);

	if (	classification == FP_SUBNORMAL ||
			classification == FP_INFINITE ||
			classification == FP_NAN )
	{
		throw MassConvertion::impossible();
	}
}

void						MassConvertion::checkDecimal( void ) const
{
	const int		feExeption = fetestexcept (FE_OVERFLOW | FE_INVALID | FE_UNDERFLOW);

	if (	feExeption & FE_OVERFLOW ||
			feExeption & FE_UNDERFLOW ||
			feExeption & FE_INVALID )
	{
		throw MassConvertion::impossible();
	}
}

char						MassConvertion::convToChar( double toConv )
{
	char c = static_cast<char>(toConv);
	checkDecimal();
	if ( !isprint(static_cast<char>(toConv)) ) {
		throw MassConvertion::nonDisplayable();
	}

	return c;
}

int							MassConvertion::convToInt( double toConv )
{
	int i = static_cast<int>(toConv);
	checkDecimal();

	return i;
}

float						MassConvertion::convToFloat( double toConv )
{
	float f = static_cast<float>(toConv);
	checkFloat(toConv);

	return f;
}

double						MassConvertion::convToDouble( double toConv )
{
	double d = static_cast<double>(toConv);
	checkFloat(toConv);

	return d;
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
