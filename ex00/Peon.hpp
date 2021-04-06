/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:00:35 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 02:18:24 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon
	: public Victim
{
private:
public:
	Peon(const Peon &clone);
	Peon(std::string name);
	~Peon();
	Peon &operator=(const Peon &op);
	void getPolymorphed() const;
};
#endif
