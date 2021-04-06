/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:05:03 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 23:43:38 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource
	: public IMateriaSource
{
private:
	AMateria *sources[4];
	int count;

public:
	MateriaSource();
	MateriaSource(const MateriaSource &clone);
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &op);
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};
#endif
