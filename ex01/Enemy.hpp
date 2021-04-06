/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:34:19 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 16:57:38 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
protected:
	int hp;
	std::string type;

public:
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &clone);
	virtual ~Enemy();
	Enemy &operator=(const Enemy &op);
	std::string const &getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};
#endif
