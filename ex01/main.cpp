/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:03:05 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 10:14:35 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Zombie.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Knife.hpp"

int main()
{
	Character *me = new Character("me");

	std::cout << *me;

	Enemy *z = new Zombie();

	AWeapon *pr = new PlasmaRifle();
	AWeapon *k = new Knife();

	me->equip(pr);
	std::cout << *me;
	me->equip(k);

	me->attack(z);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(z);
	std::cout << *me;
	me->attack(z);
	std::cout << *me;

	delete me;
	delete pr;
	delete k;
	return 0;
}
