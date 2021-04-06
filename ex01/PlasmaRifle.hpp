/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:13:33 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:04:18 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle
	: public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &clone);
	virtual ~PlasmaRifle();
	PlasmaRifle &operator=(const PlasmaRifle &op);
	void attack() const;
};
#endif
