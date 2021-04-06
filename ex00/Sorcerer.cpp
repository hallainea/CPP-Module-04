/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:12:22 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 02:18:26 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const Sorcerer &clone)
{
	Sorcerer::operator=(clone);
}

Sorcerer::Sorcerer(std::string name, std::string title)
	: name(name),
	  title(title)
{
	std::cout << name
			  << ", "
			  << title
			  << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name
			  << ", "
			  << title
			  << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &op)
{
	Sorcerer::name = op.name;
	Sorcerer::title = op.title;
	return (*this);
}

std::string Sorcerer::getName() const
{
	return (Sorcerer::name);
}

std::string Sorcerer::getTitle() const
{
	return (Sorcerer::title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am "
		<< sorcerer.getName()
		<< ", "
		<< sorcerer.getTitle()
		<< ", and I like ponies!" << std::endl;
	return (out);
}
