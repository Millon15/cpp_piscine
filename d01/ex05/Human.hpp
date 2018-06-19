/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:08:39 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 18:03:36 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Human_hpp
#define Human_hpp

#include "Brain.hpp"

class Human {

public:
	Human( void );
	~Human( void );

	std::string			identify( void ) const;
	const Brain&		getBrain( void ) const;

private:
	Brain const		_brain;

};

#endif
