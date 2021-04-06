/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:49:37 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/03 15:12:36 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

ISpaceMarine *TacticalMarine::clone() const
{
	TacticalMarine *clone = new TacticalMarine(*this);
	return (clone);
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &other)
{
	if (other.token != this)
		return (*this);
	//??
	return (*this);
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
	if (other.token != this)
		std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::TacticalMarine(/* args */)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}