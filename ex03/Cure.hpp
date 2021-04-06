/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:08:09 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 22:08:23 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure
	: public AMateria
{
public:
	Cure();
	Cure(const Cure &clone);
	~Cure();
	Cure &operator=(const Cure &op);
	AMateria *clone() const;
	void use(ICharacter &target);
};
#endif
