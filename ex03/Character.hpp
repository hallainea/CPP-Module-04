/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:09:22 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 22:52:20 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character
	: public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
	int count;

public:
	Character(std::string const &name);
	Character(const Character &clone);
	~Character();
	Character &operator=(const Character &op);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};
#endif
