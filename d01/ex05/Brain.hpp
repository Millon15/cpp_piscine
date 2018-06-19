/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:01:25 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 18:11:28 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_hpp
#define Brain_hpp

#include <string>
#include <sstream>

class Brain {

public:
	Brain( bool isSmart = false );
	~Brain( void );

	std::string		identify( void ) const;

private:
	bool				_isSmart;
	std::stringstream	_addres;

};

#endif
