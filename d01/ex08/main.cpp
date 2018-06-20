/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:07:27 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/20 15:43:40 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main( void )
{
	Human	H;

	H.action("asd", "people");
	H.action("asdsaasfasd", "people");
	H.action("asdsfghfgdhfg", "people");
	H.action("meleeAttack", "baby");
	H.action("intimidatingShout", "boy");
	H.action("rangedAttack", "girl");
	H.action("", "people");

	return 0;
}
