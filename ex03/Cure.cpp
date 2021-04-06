/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:08:39 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 00:41:21 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure")
{
}

Cure::Cure(const Cure &clone)
	: AMateria("cure")
{
	Cure::operator=(clone);
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &op)
{
	AMateria::operator=(op);
	return (*this);
}

AMateria *Cure::clone() const
{
	return ((AMateria *)new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals "
			  << target.getName()
			  << "'s wounds *" << std::endl;
	AMateria::use(target);
}
