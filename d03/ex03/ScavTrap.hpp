/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:55:43 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/23 14:19:48 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap( void );
	ScavTrap( std::string );
	ScavTrap( const ScavTrap & );
	~ScavTrap( void );

	ScavTrap		&operator=( const ScavTrap & );

	// challengeNewcomer method
	void			challengeNewcomer( const std::string &target );

};

#endif
