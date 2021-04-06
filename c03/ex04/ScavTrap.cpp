/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 19:59:50 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 17:28:45 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void		ScavTrap::challengeNewcomer (std :: string const & target)
{
	std::string business[5] = {"playing", "eating", "hugging", "kissing", "dieing"};
	
	std::cout << "SC4V-TP " << this->name << " start " << business[rand() % 5] << \
	" whis "<< target << "!!!" << std::endl;
	
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " \
	<< target << " at range, causing " << this->ranged_damage \
	<<  "points of damage! " << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " \
	<< target << " at range, causing " << this->melee_damage \
	<<  "points of damage! " << std::endl;
}

void	ScavTrap::setDefaultValues(void)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->melee_damage = 20;
	this->ranged_damage = 15;
	this->armor_reduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->setDefaultValues();
	std::cout << "Hello! My name is " << this->name \
	<< "! I love peace" <<std::endl;
}

ScavTrap::ScavTrap()
{
	std::string s = std::to_string(rand() % 100000 + 10000);
	this->name = "Player_S" + s;
	this->setDefaultValues();
	std::cout << "Hello! My name is " << this->name \
	<< "! I love peace" <<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "(" << this->name \
	<< ") I'll be back" <<std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & other)
{
    this->name = other.name + "_copy";
    this->hit_points = other.hit_points;
    this->max_hit_points = other.max_hit_points;
    this->energy_points = other.energy_points;
    this->max_energy_points = other.max_energy_points;
    this->level = other.level;
    this->melee_damage = other.melee_damage;
    this->ranged_damage = other.ranged_damage;
    this->armor_reduction = other.armor_reduction;
	std::cout << "Now my name is " << this->name \
	<< "! I love peace" <<std::endl;
    return (*this);
}
