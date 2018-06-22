/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:55:43 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/22 23:26:52 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class ScavTrap {

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

	unsigned int	VaulthunterDotExe_attack_damage;
	unsigned int	Meme_attack_damage;
	unsigned int	Fart_attack_damage;
	unsigned int	Weed_attack_damage;
	unsigned int	Trololo_attack_damage;
	unsigned int	Laser_attack_damage;

	// Random methods
	int				getRandomNumber( const unsigned int  ) const;

public:

	ScavTrap( std::string );
	ScavTrap( const ScavTrap & );
	~ScavTrap( void );

	ScavTrap		&operator=( const ScavTrap & );

	// ScavTrap attacks
	void			rangedAttack( const std::string &target ) const;
	void			meleeAttack( const std::string &target ) const;
	// ScavTrap damage methods
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	// challengeNewcomer method
	void			challengeNewcomer( const std::string &target );

	// Getters
	std::string		getName( void ) const;
	unsigned int	getMeleeAttackDamage( void ) const;
	unsigned int	getRangedAttackDamage( void ) const;
	unsigned int	getArmourDamageReduction( void ) const;
	unsigned int	getVaulHunter_dot_exeDamage( void ) const;
	unsigned int	getMemeAttackDamage( void ) const;
	unsigned int	getFartAttackDamage( void ) const;
	unsigned int	getWeedAttackDamage( void ) const;
	unsigned int	getTrololoAttackDamage( void ) const;
	unsigned int	getLaserAttackDamage( void ) const;
	unsigned int	getHitPoints( void ) const;
	unsigned int	getEnergyPoints( void ) const;

};

#endif
