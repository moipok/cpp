/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 19:59:50 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 17:27:40 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::string		ScavTrap::getName(void) const
{
	return (this->name);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int damage;
	
	if (this->hit_points == 0)
		return ;
	damage = (int)amount - this->armor_reduction;
	if (damage <= 0)
	{
		std::cout << "SC4V-TP " << this->name << " take 0 damage!! EAZY!!" << std::endl;
		return ;
	}
	this->hit_points -= damage; 
	std::cout << "SC4V-TP " << this->name << " take " << damage << " damage!! " << std::endl;
	if (damage >= this->hit_points)
	{
		std::cout << "SC4V-TP " << this->name << " is dead!" << std::endl;
		this->hit_points = 0;
	}
	std::cout << "(" << this->name << ") " << this->hit_points << " hp" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int health;
	
	if (this->hit_points == this->max_hit_points)
		return ;
	health = (int)amount;
	if (this->hit_points + health >= this->max_hit_points)
		health = this->max_hit_points - this->hit_points;
	std::cout << "SC4V-TP " << this->name << " repaired by " << health << " hp!! " << std::endl;
	this->hit_points += health;
	std::cout << "(" << this->name << ") " << this->hit_points << " hp" << std::endl;
}

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
