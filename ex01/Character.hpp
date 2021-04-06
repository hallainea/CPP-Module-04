/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:40:55 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:04:44 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int ap;
	AWeapon *weapon;

public:
	Character(std::string const &name);
	Character(const Character &clone);
	~Character();
	Character &operator=(const Character &op);
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string const &getName() const;
	int getAP(void) const;
	AWeapon *getWeapon(void) const;
};
std::ostream &operator<<(std::ostream &out, Character const &character);
#endif
