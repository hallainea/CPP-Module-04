/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:03:24 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 02:18:21 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"

Peon::Peon(const Peon &clone)
	: Victim(clone.getName())
{
	Peon::operator=(clone);
}

Peon::Peon(std::string name)
	: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon &op)
{
	Victim::operator=(op);
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << Peon::getName()
			  << " has been turned into a pink pony!" << std::endl;
}
