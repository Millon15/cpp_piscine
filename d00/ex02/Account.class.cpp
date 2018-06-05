/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 17:06:01 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/05 18:32:52 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./resources/Account.class.hpp"
#include <iostream>

int Account::_nbAccounts(0);

Account::Account( int initial_deposit )
{
	std::cout << "index:" << (_nbAccounts++) << ";" << "amount:" << initial_deposit << ";" << "created";
}
