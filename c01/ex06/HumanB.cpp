/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:04:44 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/13 00:06:37 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void		HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->gun->getType() << std::endl;
}
void		HumanB::setWeapon(Weapon &gun)
{
	this->gun = &gun;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}