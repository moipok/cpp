/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:09:13 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 14:19:01 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string		ClapTrap::getName(void) const
{
	return (this->name);
}

void			ClapTrap::setEnergy_points(int energy)
{
	energy_points = energy;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int damage;
	
	if (this->hit_points == 0)
		return ;
	damage = (int)amount - this->armor_reduction;
	if (damage <= 0)
	{
		std::cout << "TRAP " << this->name << " take 0 damage!! EAZY!!" << std::endl;
		return ;
	}
	this->hit_points -= damage; 
	std::cout << "TRAP " << this->name << " take " << damage << " damage!! " << std::endl;
	if (damage >= this->hit_points)
	{
		std::cout << "TRAP " << this->name << " is dead!" << std::endl;
		this->hit_points = 0;
	}
	std::cout << "(" << this->name << ") " << this->hit_points << " hp" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int health;
	
	if (this->hit_points == this->max_hit_points)
	{
		std::cout << "TRAP " << this->name << " have max hp!!! " << std::endl;
		return ;
	}
	health = (int)amount;
	if (this->hit_points + health >= this->max_hit_points)
		health = this->max_hit_points - this->hit_points;
	std::cout << "TRAP " << this->name << " repaired by " << health << " hp!!! " << std::endl;
	this->hit_points += health;
	std::cout << "(" << this->name << ") " << this->hit_points << " hp" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "Hello! My name is " << this->name \
	<< "! I'm ClapTrap" <<std::endl;
}

ClapTrap::ClapTrap()
{
	std::string s = std::to_string(rand() % 100000 + 10000);
	this->name = "Player_0" + s;
	std::cout << "Hello! My name is " << this->name \
	<< "! I'm ClapTrap" <<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "(" << this->name \
	<< ") (ClapTrap) Nobody needs me anymore. Suicide." <<std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & other)
{
    this->name = other.name + "_copy_Clap";
    this->hit_points = other.hit_points;
    this->max_hit_points = other.max_hit_points;
    this->energy_points = other.energy_points;
    this->max_energy_points = other.max_energy_points;
    this->level = other.level;
    this->melee_damage = other.melee_damage;
    this->ranged_damage = other.ranged_damage;
    this->armor_reduction = other.armor_reduction;
	std::cout << "Now my name is " << this->name \
	<< "!" <<std::endl;
    return (*this);
}