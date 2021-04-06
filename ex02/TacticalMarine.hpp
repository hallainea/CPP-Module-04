/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:33:45 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 21:47:48 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine
	: public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &clone);
	~TacticalMarine();
	TacticalMarine &operator=(const TacticalMarine &op);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};
#endif
