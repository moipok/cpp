/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:00:22 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 17:17:00 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap & SuperTrap::operator=(SuperTrap const & other)
{
    this->name = other.name + "_copy_Super";
    this->hit_points = other.hit_points;
    this->max_hit_points = other.max_hit_points;
    this->energy_points = other.energy_points;
    this->max_energy_points = other.max_energy_points;
    this->level = other.level;
    this->melee_damage = other.melee_damage;
    this->ranged_damage = other.ranged_damage;
    this->armor_reduction = other.armor_reduction;
	std::cout << "My supername is " << this->name \
	<< "! I love silense and kill" <<std::endl;
    return (*this);
}

void	SuperTrap::setDefaultValues(void)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_damage = 60;
	this->ranged_damage = 20;
	this->armor_reduction = 5;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	std::cout << "SuperNinja-TP " << this->name << " super attacks " \
	<< target << " at range, causing " << this->ranged_damage \
	<<  "points of damage! " << std::endl;
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ninja-TP " << this->name << " attacks " \
	<< target << " at range, causing " << this->melee_damage \
	<<  "points of damage! " << std::endl;
}
	
SuperTrap::SuperTrap(std::string name)
{
	this->name = name;
	this->setDefaultValues();
	std::cout << "My supername is " << this->name \
	<< "! I love silense and kill" <<std::endl;
}

SuperTrap::SuperTrap()
{
	std::string s = std::to_string(rand() % 100000 + 10000);
	this->name = "Ninja_" + s;
	this->setDefaultValues();
	std::cout << "My supername is " << this->name \
	<< "! I love silense and kill" <<std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "(" << this->name \
	<< ") Bye bye ^.^" <<std::endl;
}