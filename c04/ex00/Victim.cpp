/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:02:09 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 16:37:28 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim &Victim::operator= (const Victim &other)
{
	if (&other == this)
		return (*this);
	this->name = other.name + "_copy";
	return (*this);
}

void		Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::string Victim::getName(void) const
{
	return(this->name);
}

std::ostream &operator<< (std::ostream &out, const Victim &other)
{
	out << "I'am " << other.getName() << " and I like otters!" << std::endl;
    return out;
}

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &other)
{
	this->name = other.name + "_copy";
}