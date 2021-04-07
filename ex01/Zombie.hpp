/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:07:18 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 10:07:35 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "Enemy.hpp"

class Zombie
	: public Enemy
{
public:
	Zombie();
	Zombie(const Zombie &clone);
	virtual ~Zombie();
	Zombie &operator=(const Zombie &op);
};
#endif
