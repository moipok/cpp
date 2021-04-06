/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:40:57 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 17:27:23 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string		FragTrap::getName(void) const
{
	return (this->name);
}

int		FragTrap::vaulthunter_dot_exe (std :: string const & target)
{
	std::string attack[5] = {"BIG BLASTER 3000", "his eye", "a electroshok", "ak-47", "snowball"};
	
	if (this->energy_points < 25)
	{
		std::cout << "(" << this->name << ") no energy =( " << std::endl;
		return 0;
	}
	this->energy_points -= 25;
	std::cout << "FR4G-TP " << this->name << " take " << attack[rand() % 5] << " end attack "\
	<< target << "!!!" << std::endl;
	return (rand() % 120);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int damage;
	
	if (this->hit_points == 0)
		return ;
	damage = (int)amount - this->armor_reduction;
	if (damage <= 0)
	{
		std::cout << "FR4G-TP " << this->name << " take 0 damage!! EAZY!!" << std::endl;
		return ;
	}
	this->hit_points -= damage; 
	std::cout << "FR4G-TP " << this->name << " take " << damage << " damage!! " << std::endl;
	if (damage >= this->hit_points)
	{
		std::cout << "FR4G-TP " << this->name << " is dead!" << std::endl;
		this->hit_points = 0;
	}
	std::cout << "(" << this->name << ") " << this->hit_points << " hp" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int health;
	
	if (this->hit_points == this->max_hit_points)
		return ;
	health = (int)amount;
	if (this->hit_points + health >= this->max_hit_points)
		health = this->max_hit_points - this->hit_points;
	std::cout << "FR4G-TP " << this->name << " repaired by " << health << " hp!! " << std::endl;
	this->hit_points += health;
	std::cout << "(" << this->name << ") " << this->hit_points << " hp" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " \
	<< target << " at range, causing " << this->ranged_damage \
	<<  "points of damage! " << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " \
	<< target << " at range, causing " << this->melee_damage \
	<<  "points of damage! " << std::endl;
}

void	FragTrap::setDefaultValues(void)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_damage = 30;
	this->ranged_damage = 20;
	this->armor_reduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->setDefaultValues();
	std::cout << "Hello! My name is " << this->name \
	<< "! I'm ready to shoot and kill hahaha" <<std::endl;
}

FragTrap::FragTrap()
{
	std::string s = std::to_string(rand() % 100000 + 10000);
	this->name = "Player_0" + s;
	this->setDefaultValues();
	std::cout << "Hello! My name is " << this->name \
	<< "! I'm ready to shoot and kill hahaha" <<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "(" << this->name \
	<< ") Nobody needs me anymore. Suicide." <<std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & other)
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
	<< "! I'm ready to shoot and kill hahaha" <<std::endl;
    return (*this);
}
