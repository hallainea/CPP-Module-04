/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Knife.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:20:34 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:16:04 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Knife.hpp"

Knife::Knife()
	: AWeapon("Knife", 2, 40)
{
}

Knife::Knife(const Knife &clone)
	: AWeapon(clone)
{
}

Knife::~Knife()
{
}

Knife &Knife::operator=(const Knife &op)
{
	AWeapon::operator=(op);
	return (*this);
}

void Knife::attack() const
{
	std::cout << "* skrutch *" << std::endl;
}
