/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:47:47 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 16:55:44 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
	: hp(hp),
	  type(type)
{
}

Enemy::Enemy(const Enemy &clone)
{
	Enemy::operator=(clone);
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(const Enemy &op)
{
	Enemy::hp = op.hp;
	Enemy::type = op.type;
	return (*this);
}

std::string const &Enemy::getType() const
{
	return (Enemy::type);
}

int Enemy::getHP() const
{
	return (Enemy::hp);
}

void Enemy::takeDamage(int amount)
{
	if (Enemy::hp < 0)
		return;
	Enemy::hp -= amount;
}
