/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:54:57 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 21:31:22 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad
	: public ISquad
{
private:
	int count;
	ISpaceMarine **units;

public:
	Squad();
	Squad(const Squad &clone);
	~Squad();
	Squad &operator=(const Squad &op);
	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *);
};
#endif
