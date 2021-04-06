/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:33:11 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 18:04:29 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion
	: public Enemy
{
public:
	RadScorpion();
	RadScorpion(const RadScorpion &clone);
	virtual ~RadScorpion();
	RadScorpion &operator=(const RadScorpion &op);
};
#endif
