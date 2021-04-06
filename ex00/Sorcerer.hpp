/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:07:24 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/06 02:18:28 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;

public:
	Sorcerer(const Sorcerer &clone);
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer &operator=(const Sorcerer &op);
	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &victim) const;
};
std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);
#endif
