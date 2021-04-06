/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:21:57 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 15:51:17 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage; 
}

std::string AWeapon::getName() const
{
	return (this->name);
}

int			AWeapon::getAPCost() const
{
	return (this->apcost);
}

int			AWeapon::getDamage() const
{
	return (this->damage);
}

AWeapon::~AWeapon()
{
}

AWeapon &AWeapon::operator= (const AWeapon &other)
{
	if (&other == this)
		return (*this);
	this->name = other.getName() + "_copy";
	this->damage = other.getDamage();
	this->apcost = other.getAPCost();
	return (*this);
}

AWeapon::AWeapon(const AWeapon &other)
{
	if (&other == this)
		return ;
	this->name = other.getName() + "_copy";
	this->damage = other.getDamage();
	this->apcost = other.getAPCost();
}