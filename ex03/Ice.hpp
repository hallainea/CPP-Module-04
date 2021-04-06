/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:01:21 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 22:08:27 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice
	: public AMateria
{
public:
	Ice();
	Ice(const Ice &clone);
	~Ice();
	Ice &operator=(const Ice &op);
	AMateria *clone() const;
	void use(ICharacter &target);
};
#endif
