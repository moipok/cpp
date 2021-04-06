/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:01:59 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 17:37:20 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

void		Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator= (const Victim &other)
{
	if (&other == this)
		return (*this);
	this->name = other.getName() + "_copy";
	return (*this);
}

Peon::Peon(const Peon &other) : Victim (other)
{
	std::cout << "Zog zog." << std::endl;
}