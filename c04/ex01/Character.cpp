/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:36:30 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 15:52:51 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::ostream &operator<< (std::ostream &out, const Character &other)
{
	if (other.getWeapon())
	{
		out << other.getName() << " has " << other.getAP() << "AP and wields a " \
		<< other.getWeaponName() << std::endl;
	}
	else
		out << other.getName() << " has " << other.getAP() << "AP and is unarmed"\
		<< std::endl;
	return out;
}

bool			Character::getWeapon() const
{
	if (this->weapon)
		return (true);
	else
		return(false);
}

std::string		Character::getWeaponName() const
{
	return (this->weapon->getName());
}

int			Character::getAP() const
{
	return (this->action_points);
}

void Character::equip(AWeapon* weapon)
{
	this->weapon = weapon; 
}

void Character::attack(Enemy* enemy)
{
	if (this->action_points < this->weapon->getAPCost())
		return ;
	this->action_points -= this->weapon->getAPCost();
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	enemy->takeDamage(weapon->getDamage());
	weapon->attack();
}

void Character::recoverAP()
{
	this->action_points += 10;
	if (this->action_points > 40)
		this->action_points = 40;
}

std::string Character::getName() const
{
	return (this->name);
}

Character::Character(std::string const & name)
{
	this->action_points = 40;
	this->name = name;
	weapon = NULL;
}

Character::~Character()
{
	std::cout << *this;
}

Character &Character::operator= (const Character &other)
{
	if (&other == this)
		return (*this);
	this->name = other.getName() + "_copy";
	this->action_points = other.getAP();
	this->weapon = other.weapon;
	return (*this);
}

Character::Character(const Character &other)
{
	if (&other == this)
		return ;
	this->name = other.getName() + "_copy";
	this->action_points = other.getAP();
	this->weapon = other.weapon;
}