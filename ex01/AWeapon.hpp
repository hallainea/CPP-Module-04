/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:11:56 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 02:08:00 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
protected:
	std::string name;
	int apcost;
	int damage;

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &clone);
	virtual ~AWeapon();
	AWeapon &operator=(const AWeapon &op);
	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};
#endif
