/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:51:30 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 00:40:02 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
	unsigned int _xp;

public:
	AMateria(std::string const &type);
	AMateria(const AMateria &clone);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &op);
	std::string const &getType() const;
	unsigned int getXP() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
