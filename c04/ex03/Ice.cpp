/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:46:11 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:24:52 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::~Ice() {}

Ice::Ice() : AMateria("ice") { }

Ice::Ice(const Ice &other) : AMateria("ice")
{
	this->_xp = other.getXP();
}

Ice &Ice::operator=(Ice const &other)
{
	this->_xp = other.getXP();
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *copy = new Ice(*this);
	return (copy);
}