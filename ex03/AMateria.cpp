/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:57:16 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 22:04:59 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
	: type(type),
	  _xp(0)
{
}

AMateria::AMateria(const AMateria &clone)
{
	AMateria::operator=(clone);
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &op)
{
	AMateria::type = op.type;
	AMateria::_xp = op._xp;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (AMateria::type);
}

unsigned int AMateria::getXP() const
{
	return (AMateria::_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	AMateria::_xp += 10;
}
