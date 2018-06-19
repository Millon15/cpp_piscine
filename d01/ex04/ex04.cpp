/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:03:53 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 14:07:18 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void )
{
	const std::string	brain("HI THIS IS BRAIN");
	const std::string*	brainPtr = &brain;
	const std::string&	brainRef = brain;

	std::cout << "Display string via pointer: " << *brainPtr << std::endl;
	std::cout << "Display string via reference: " << brainRef << std::endl;

	return 0;
}