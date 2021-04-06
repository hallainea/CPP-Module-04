/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:03:26 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 21:31:20 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"

Squad::Squad()
	: count(0),
	  units(NULL)
{
}

Squad::Squad(const Squad &clone)
{
	Squad::operator=(clone);
}

Squad::~Squad()
{
	for (int index = 0; index < Squad::count; index++)
		delete Squad::units[index];
	delete[] Squad::units;
}

Squad &Squad::operator=(const Squad &op)
{
	if (Squad::units)
	{
		for (int index = 0; index < Squad::count; index++)
			delete Squad::units[index];
		delete[] Squad::units;
	}
	Squad::count = op.count;
	Squad::units = NULL;
	for (int index = 0; index < op.count; index++)
		Squad::push(op.units[index]->clone());
	return (*this);
}

int Squad::getCount() const
{
	return (Squad::count);
}

ISpaceMarine *Squad::getUnit(int index) const
{
	if (index < 0 || index >= Squad::count)
		return (NULL);
	return (Squad::units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL)
		return (Squad::count);
	for (int index = 0; index < Squad::count; index++)
		if (Squad::units[index] == unit)
			return (Squad::count);
	ISpaceMarine **units = new ISpaceMarine *[this->count + 1];
	for (int index = 0; index < Squad::count; index++)
		units[index] = Squad::units[index];
	units[Squad::count++] = unit;
	delete[] Squad::units;
	Squad::units = units;
	return (Squad::count);
}
