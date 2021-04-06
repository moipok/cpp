/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 00:47:45 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/03 15:11:06 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

ISpaceMarine *AssaultTerminator::clone() const
{
	AssaultTerminator *clone = new AssaultTerminator(*this);
	return (clone);
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &other)
{
	if (other.token != this)
		return (*this);
	//??
	return (*this);
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
	if (other.token != this)
		std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::AssaultTerminator(/* args */)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}