/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:01:56 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 17:11:11 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Sorcerer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peon peon(joe);
	/* ***************************** test virtual destructer **************** */
	// Victim *vptr = new Peon("test");
	// delete vptr;
	/* ***************************** test Polymorphed        **************** */
	// jim.getPolymorphed();
	// joe.getPolymorphed();
	/* ***************************** test operator =     *   **************** */
	// joe = jim;
	// std::cout << jim << joe;
	// jim = joe;
	// std::cout << jim << joe;
	/* ********************************************************************** */
	std::cout << robert << jim << joe << peon;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}