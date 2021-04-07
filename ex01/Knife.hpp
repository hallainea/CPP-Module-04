/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Knife.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:09:31 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 10:09:33 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KNIFE_HPP
#define KNIFE_HPP

#include "AWeapon.hpp"

class Knife
	: public AWeapon
{
public:
	Knife();
	Knife(const Knife &clone);
	virtual ~Knife();
	Knife &operator=(const Knife &op);
	void attack() const;
};
#endif
