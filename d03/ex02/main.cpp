/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 17:02:26 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/23 14:08:41 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main( void )
{
	{
		FragTrap	b("3LL-MT");
		FragTrap	f("4LL-MT");

		f.vaulthunter_dot_exe("Bandit");
		f.vaulthunter_dot_exe("Raider");
		f.vaulthunter_dot_exe("Yourself");
		f.vaulthunter_dot_exe("Faggot");
		f.vaulthunter_dot_exe("Nazi");
		std::cout << f.getEnergyPoints() << std::endl;

		b = f;
		b.rangedAttack(f.getName());
		b.meleeAttack("You");
		b.takeDamage(12);
		b.takeDamage(9999);
		std::cout << b.getHitPoints() << std::endl;
		b.beRepaired(30);
		b.beRepaired(30);
		b.beRepaired(530);
		std::cout << b.getHitPoints() << std::endl;
	}

	{
		ScavTrap	b("3LL-MT");
		ScavTrap	f("4LL-MT");

		f.challengeNewcomer("Bandit");
		f.challengeNewcomer("Raider");
		f.challengeNewcomer("Yourself");
		f.challengeNewcomer("Faggot");
		f.challengeNewcomer("Nazi");
		std::cout << f.getEnergyPoints() << std::endl;

		b = f;
		b.rangedAttack(f.getName());
		b.meleeAttack("You");
		b.takeDamage(12);
		b.takeDamage(9999);
		std::cout << b.getHitPoints() << std::endl;
		b.beRepaired(30);
		b.beRepaired(30);
		b.beRepaired(530);
		std::cout << b.getHitPoints() << std::endl;
	}
}
