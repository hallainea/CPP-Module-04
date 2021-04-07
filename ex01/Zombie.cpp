/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:07:43 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 10:08:09 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
	: Enemy(80, "Zombie")
{
	std::cout << "* grrr heuuu *" << std::endl;
}

Zombie::Zombie(const Zombie &clone)
	: Enemy(clone)
{
	std::cout << "* grrr heuuu *" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "* eurkkk *" << std::endl;
}

Zombie &Zombie::operator=(const Zombie &op)
{
	Enemy::operator=(op);
	return (*this);
}
