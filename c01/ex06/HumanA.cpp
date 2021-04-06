/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:50:58 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/12 23:08:39 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void		HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->gun->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &gun)
{
	this->name = name;
	this->gun = &gun;
}

HumanA::~HumanA()
{
}