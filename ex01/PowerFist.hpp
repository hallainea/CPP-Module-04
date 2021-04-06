/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:30:50 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:04:22 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist
	: public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &clone);
	virtual ~PowerFist();
	PowerFist &operator=(const PowerFist &op);
	void attack() const;
};
#endif
