/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:03:14 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 22:07:44 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice")
{
}

Ice::Ice(const Ice &clone)
	: AMateria("ice")
{
	Ice::operator=(clone);
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &op)
{
	AMateria::operator=(op);
	return (*this);
}

AMateria *Ice::clone() const
{
	return ((AMateria *)new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "
			  << target.getName()
			  << " *" << std::endl;
	AMateria::use(target);
}
