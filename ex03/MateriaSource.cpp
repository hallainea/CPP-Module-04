/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:08:32 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 00:37:43 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
	: count(0)
{
}

MateriaSource::MateriaSource(const MateriaSource &clone)
{
	MateriaSource::operator=(clone);
}

MateriaSource::~MateriaSource()
{
	for (int index = 0; index < MateriaSource::count; index++)
		delete MateriaSource::sources[index];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &op)
{
	MateriaSource::count = op.count;
	for (int index = 0; index < op.count; index++)
		MateriaSource::sources[index] = op.sources[index];
	return (*this);
}

void MateriaSource::learnMateria(AMateria *material)
{
	if (MateriaSource::count >= 4 || !material)
		return;
	for (int index = 0; index < MateriaSource::count; index++)
		if (MateriaSource::sources[index] == material)
			return;
	MateriaSource::sources[MateriaSource::count++] = material;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int index = 0; index < MateriaSource::count; index++)
		if (MateriaSource::sources[index]->getType() == type)
			return (MateriaSource::sources[index]);
	return (NULL);
}
