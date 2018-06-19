/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:28:27 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 18:03:45 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void )
{
	return ;
}

Human::~Human( void )
{
	return ;
}



std::string			Human::identify( void ) const
{
	return _brain.identify();
}

const Brain&		Human::getBrain( void ) const
{
	return _brain;
}
