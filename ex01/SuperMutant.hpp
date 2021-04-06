/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:58:43 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:04:41 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant
	: public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &clone);
	virtual ~SuperMutant();
	SuperMutant &operator=(const SuperMutant &op);
	void takeDamage(int);
};
#endif
