/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:16:19 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 15:55:57 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

std::string	Enemy::getType() const
{
	return(this->type);
}

int			Enemy::getHP() const
{
	return(this->hit_points);
}

void		Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return ;
	this->hit_points -= damage;
	if (this->hit_points < 0)
		this->hit_points = 0;
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->hit_points = hp;
	this->type = type;
}

Enemy::~Enemy()
{	
}

Enemy &Enemy::operator= (const Enemy &other)
{
	if (&other == this)
		return (*this);
	this->type = other.getType();
	this->hit_points = other.getHP();
	return (*this);
}

Enemy::Enemy(const Enemy &other)
{
	if (&other == this)
		return ;
	this->type = other.getType();
	this->hit_points = other.getHP();
}
