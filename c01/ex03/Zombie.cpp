/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:10:10 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/10 21:11:42 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::announce(void)
{
	std::cout << "(" << this->name << \
	" " << this->type << ") ARR BRAINZZZ" << std::endl;
}

void		Zombie::SetName(std::string name)
{
	this->name = name;
}
void		Zombie::SetType(std::string type)
{
	this->type = type;
}

std::string	Zombie::GetName(void)
{
	return(this->name);
}

std::string	Zombie::GetType(void)
{
	return(this->type);
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " dead" << std::endl;
}