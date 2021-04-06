/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:50:11 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/03 16:39:14 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	
}

AMateria::~AMateria()
{
	
}

AMateria::AMateria(std::string const & type)
{
	if (type == "ice" || type == "cure")
		this->type = type;
	else
	{
		std::cout << "Wrong type " << type << std::endl;
		this->type = nullptr;
	}
}

AMateria::AMateria(AMateria const &other)
{
	this->type = other.getType();
	this->_xp = other.getXP();
}

void AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	if (this->type == "ice")
		std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "cure")
		std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
	else
		this->_xp -= 10;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	this->type = other.getType();
	this->_xp = other.getXP();
	return (*this);
}

