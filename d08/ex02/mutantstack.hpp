/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:24:23 by vbrazas           #+#    #+#             */
/*   Updated: 2018/07/09 19:41:45 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stdexcept>
#include <stack>
#include <cstdlib>

template< typename T >
class MutantStack : public std::stack<T> {

private:
	typedef typename std::stack<T>					st;

public:
	typedef typename st::container_type::iterator	iterator;

	MutantStack( void ) : st() {}
	MutantStack( const MutantStack &toCopy ) : st(toCopy) {}
	~MutantStack( void ) {}
	using st::operator=;

	iterator	begin( void ) { return st::c.begin(); }
	iterator	end( void ) { return st::c.end(); }

};

#endif												// end of MUTANTSTACK_HPP
