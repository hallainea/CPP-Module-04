/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:49:56 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 02:18:30 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

#include <iostream>

Victim::Victim(const Victim &clone)
{
	Victim::operator=(clone);
}

Victim::Victim(std::string name)
	: name(name)
{
	std::cout << "Some random victim called "
			  << Victim::name
			  << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim "
			  << Victim::name
			  << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(const Victim &op)
{
	Victim::name = op.name;
	return (*this);
}

std::string Victim::getName() const
{
	return (Victim::name);
}

void Victim::getPolymorphed() const
{
	std::cout << Victim::name
			  << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
	out << "I'm "
		<< victim.getName()
		<< " and I like otters!" << std::endl;
	return (out);
}
