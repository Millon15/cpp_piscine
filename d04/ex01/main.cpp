/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:37:49 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/25 19:42:10 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"

int			main()
{
	{
		Character*		zaz = new Character("zaz");

		std::cout << *zaz;

		Enemy*			b = new RadScorpion();
		AWeapon*		pr = new PlasmaRifle();
		AWeapon*		pf = new PowerFist();

		zaz->equip(pr);
		std::cout << *zaz;
		zaz->equip(pf);
		zaz->attack(b);
		std::cout << *zaz;
		zaz->equip(pr);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;
	}

	{
		Character	*Arta = new Character("Arta");
		Enemy		*golem = new SuperMutant();
		Enemy		*bug = new RadScorpion();
		AWeapon		*fist = new PowerFist();

		std::cout << std::endl;
		std::cout << *Arta;
 		
		std::cout << "** Will attempt attacking with no weapon, nothing will happen **" << std::endl << std::endl;
		Arta->attack(golem);
		std::cout << *Arta;

		Arta->equip(fist);

		std::cout << std::endl << "** Attacking Golem - Super Mutant **" << std::endl << std::endl;
		Arta->attack(golem);
		std::cout << *Arta;
		Arta->attack(golem);
		std::cout << *Arta;
		Arta->attack(golem);
		std::cout << *Arta;
		Arta->attack(golem);
		std::cout << std::endl << "** Golem - Super Mutant is dead, so when Arta tries to attack it will show no combat has been done and AP remains unchanged **" << std::endl;
		std::cout << std::endl;
		
		std::cout << *Arta;
		Arta->attack(golem);
		std::cout << *Arta;

		std::cout << std::endl << "** Attacking Bug - RadScorpion, should run out of AP and shows no combat happens **" << std::endl << std::endl;
		Arta->attack(bug);
		std::cout << *Arta;
		Arta->attack(bug);
		std::cout << *Arta;
		std::cout << std::endl << "** Recovering AP now in order to combat **" << std::endl << std::endl;
		Arta->recoverAP();
		Arta->attack(bug);
		std::cout << *Arta;
	}

	return 0;
}
