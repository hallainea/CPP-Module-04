/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:32:17 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:16:10 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist()
	: AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &clone)
	: AWeapon(clone)
{
}

PowerFist::~PowerFist()
{
}

PowerFist &PowerFist::operator=(const PowerFist &op)
{
	AWeapon::operator=(op);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
