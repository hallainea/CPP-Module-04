/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:42:40 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:15:49 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character(std::string const &name)
	: name(name),
	  ap(40),
	  weapon(NULL)
{
}

Character::Character(const Character &clone)
{
	Character::operator=(clone);
}

Character::~Character()
{
}

Character &Character::operator=(const Character &op)
{
	Character::name = op.name;
	Character::ap = op.ap;
	Character::weapon = op.weapon;
	return (*this);
}

void Character::recoverAP()
{
	Character::ap += 10;
	if (Character::ap > 40)
		Character::ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	Character::weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (!Character::weapon)
		return;
	if (Character::ap < Character::weapon->getAPCost())
		return;
	Character::ap -= Character::weapon->getAPCost();
	std::cout << Character::name
			  << " attacks "
			  << enemy->getType()
			  << " with a "
			  << Character::weapon->getName() << std::endl;
	Character::weapon->attack();
	enemy->takeDamage(Character::weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const &Character::getName() const
{
	return (Character::name);
}

int Character::getAP(void) const
{
	return (Character::ap);
}
AWeapon *Character::getWeapon(void) const
{
	return (Character::weapon);
}

std::ostream &operator<<(std::ostream &out, Character const &character)
{
	out << character.getName()
		<< " has "
		<< character.getAP()
		<< " AP and ";
	if (character.getWeapon())
		out << "wields a "
			<< character.getWeapon()->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return (out);
}
