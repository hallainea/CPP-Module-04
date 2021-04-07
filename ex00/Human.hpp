/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 08:58:37 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 08:58:58 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Victim.hpp"

class Human
	: public Victim
{
private:
public:
	Human(const Human &clone);
	Human(std::string name);
	~Human();
	Human &operator=(const Human &op);
	void getPolymorphed() const;
};
#endif
