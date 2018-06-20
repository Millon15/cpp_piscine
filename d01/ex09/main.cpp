/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 16:00:42 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/20 16:15:31 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main( void )
{
	Logger	L("file.log");

	L.log("logToConsole", "asd");
	L.log("logToFile", "asd");

	return 0;
}
