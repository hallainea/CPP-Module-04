/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:08:08 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:04:03 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
	: name(name),
	  apcost(apcost),
	  damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &clone)
{
	AWeapon::operator=(clone);
}

AWeapon::~AWeapon()
{
}

AWeapon &AWeapon::operator=(const AWeapon &op)
{
	AWeapon::name = op.name;
	AWeapon::apcost = op.apcost;
	AWeapon::damage = op.damage;
	return (*this);
}

std::string const &AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}
