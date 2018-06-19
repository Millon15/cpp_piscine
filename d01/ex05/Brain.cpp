/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:03:45 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 18:06:58 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( bool isSmart ) : _isSmart(isSmart)
{
	if (_isSmart || !_isSmart)
		_addres << this;
}

Brain::~Brain( void )
{
	return ;
}



std::string			Brain::identify( void ) const
{
	return _addres.str();
}
