/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:39:50 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 02:18:32 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>

class Victim
{
private:
	std::string name;

public:
	Victim(const Victim &clone);
	Victim(std::string name);
	~Victim();
	Victim &operator=(const Victim &op);
	std::string getName() const;
	virtual void getPolymorphed() const;
};
std::ostream &operator<<(std::ostream &out, Victim const &victim);
#endif
