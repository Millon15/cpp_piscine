/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:16:13 by vbrazas           #+#    #+#             */
/*   Updated: 2018/07/03 15:16:18 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <list>
#include <deque>

template< typename T >
typename T::iterator			easyfind( T &t, int toFind )
{
	typename T::iterator		it = std::find( t.begin(), t.end(), toFind );

	if ( it == t.end() && *it != toFind )		throw(std::exception());

	return it;
}
