/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:55:43 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/22 23:38:07 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class ClapTrap {

private:
	// Player attributes
	std::string		Name;
	unsigned int	Hit_points;
	unsigned int	Max_hit_points;
	unsigned int	Energy_points;
	unsigned int	Max_energy_points;
	unsigned int	Level;

	unsigned int	Melee_attack_damage;
	unsigned int	Ranged_attack_damage;
	unsigned int	Armor_damage_reduction;

	// Random methods
	int				getRandomNumber( const unsigned int  ) const;

public:

	ClapTrap( std::string );
	ClapTrap( const ClapTrap & );
	~ClapTrap( void );

	ClapTrap		&operator=( const ClapTrap & );

	// ClapTrap attacks
	void			rangedAttack( const std::string &target ) const;
	void			meleeAttack( const std::string &target ) const;
	// ClapTrap damage methods
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	// Getters
	std::string		getName( void ) const;
	unsigned int	getMeleeAttackDamage( void ) const;
	unsigned int	getRangedAttackDamage( void ) const;
	unsigned int	getArmourDamageReduction( void ) const;
	unsigned int	getHitPoints( void ) const;
	unsigned int	getEnergyPoints( void ) const;

};

#endif
