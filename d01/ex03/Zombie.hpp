/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:29:00 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/19 13:37:09 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_hpp
#define Zombie_hpp

#include <iostream>

class Zombie {

public:

	Zombie( void );
	Zombie( std::string name, std::string type );
	~Zombie( void );

	void		setName( std::string name );
	void		setType( std::string type );
	void		annonce( void );

private:
	std::string	_name;
	std::string _type;

};

#endif
