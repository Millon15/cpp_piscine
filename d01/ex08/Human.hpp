/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:03:03 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/20 15:30:08 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Human_hpp
#define Human_hpp

#include <string>
#include <iostream>

class Human {

public:
	Human( void );
	~Human( void );

	void		action(std::string const & action_name, std::string const & target);

private:
	void		meleeAttack(std::string const & target);
	void		rangedAttack(std::string const & target);
	void		intimidatingShout(std::string const & target);

};

#endif
