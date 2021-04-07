/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 08:59:41 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 09:00:28 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

Human::Human(const Human &clone)
	: Victim(clone.getName())
{
	Human::operator=(clone);
}

Human::Human(std::string name)
	: Victim(name)
{
	std::cout << "Heyy it's me :D" << std::endl;
}

Human::~Human()
{
	std::cout << "HEUU HEUUUU" << std::endl;
}

Human &Human::operator=(const Human &op)
{
	Victim::operator=(op);
	return (*this);
}

void Human::getPolymorphed() const
{
	std::cout << Human::getName()
			  << " has been turned into a FUCKING ZOMBYYYY!" << std::endl;
}
