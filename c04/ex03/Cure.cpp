/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:29:31 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:22:58 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::~Cure() {}

Cure::Cure() : AMateria("cure") { }

Cure::Cure(const Cure &other) : AMateria("cure")
{
	this->_xp = other.getXP();
}

Cure &Cure::operator=(Cure const &other)
{
	this->_xp = other.getXP();
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *copy = new Cure(*this);
	return (copy);
}