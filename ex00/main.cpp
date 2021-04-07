/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:05:18 by ahallain          #+#    #+#             */
/*   Updated: 2021/04/07 09:01:24 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Human.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Human eric("Eric");
	std::cout << robert << jim << joe << eric;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(eric);
	return (0);
}
