/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:37:52 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 17:28:37 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void			NinjaTrap::ninjaShoebox(ClapTrap &Trap)
{
	std::string business[5] = {"playing", "eating", "hugging", "kissing"};
	
	std::cout << "Ninja-TP " << this->name << " start " << business[rand() % 5] << \
	" whis "<< Trap.getName() << "!!!" << std::endl;
}

void			NinjaTrap::ninjaShoebox(FragTrap &Trap)
{
	if (this->energy_points < 25)
	{
		std::cout << "(" << this->name << ") No energy!!!" << std::endl;
		return ;
	}
	this->energy_points -= 25;
	std::cout << "Ninja-TR " << this->name << " start shooting "<< Trap.getName() << "!!!" << std::endl;
	Trap.takeDamage(rand() % 25);
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &Trap)
{
	if (this->energy_points < 25)
	{
		std::cout << "(" << this->name << ") No energy!!!" << std::endl;
		return ;
	}
	this->energy_points -= 25;
	std::cout << "Ninja-TR " << this->name << " start healing "<< Trap.getName() << "!!!" << std::endl;
	Trap.beRepaired(rand() % 50);
}

void			NinjaTrap::ninjaShoebox(ScavTrap &Trap)
{
	if (this->energy_points < 25)
	{
		std::cout << "(" << this->name << ") No energy!!!" << std::endl;
		return ;
	}
	this->energy_points -= 25;
	std::cout << "Ninja-TR " << this->name << " killing "<< Trap.getName() << "!!!" << std::endl;
	Trap.takeDamage(1000);
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Ninja-TP " << this->name << " attacks " \
	<< target << " at range, causing " << this->ranged_damage \
	<<  "points of damage! " << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ninja-TP " << this->name << " attacks " \
	<< target << " at range, causing " << this->melee_damage \
	<<  "points of damage! " << std::endl;
}

void	NinjaTrap::setDefaultValues(void)
{
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_damage = 60;
	this->ranged_damage = 5;
	this->armor_reduction = 0;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	this->setDefaultValues();
	std::cout << "Tsss! My name is " << this->name \
	<< "! I love silense" <<std::endl;
}

NinjaTrap::NinjaTrap()
{
	std::string s = std::to_string(rand() % 100000 + 10000);
	this->name = "Ninja_" + s;
	this->setDefaultValues();
	std::cout << "Tsss! My name is " << this->name \
	<< "! I love silense" <<std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "(" << this->name \
	<< ") Bye bye" <<std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & other)
{
    this->name = other.name + "_copy_ninja";
    this->hit_points = other.hit_points;
    this->max_hit_points = other.max_hit_points;
    this->energy_points = other.energy_points;
    this->max_energy_points = other.max_energy_points;
    this->level = other.level;
    this->melee_damage = other.melee_damage;
    this->ranged_damage = other.ranged_damage;
    this->armor_reduction = other.armor_reduction;
	std::cout << "Tsss! My name is " << this->name \
	<< "! I love silense" <<std::endl;
    return (*this);
}
