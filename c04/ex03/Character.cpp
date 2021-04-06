/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:26:12 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:19:07 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string _name)
{
	this->_name = _name;
	num = 0;
}

Character::Character()
{
	this->_name = "noname";
	num = 0;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (this->num == 4 || m == nullptr)
		return ;
	materia[this->num] = m->clone();
	this->num++;
}

void Character::unequip(int idx)
{
	if (idx > this->num - 1 || idx < 0)
		return ;
	while (idx < this->num - 1)
	{
		materia[idx] = materia[idx + 1];
		materia[idx + 1] = nullptr;
		idx++;
	}
	materia[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > this->num - 1 || idx < 0)
		return ;
	materia[idx]->use(target);
}

Character::Character(const Character &other)
{
	this->_name = other.getName();
	this->num = other.num;
	int i;
	i = 0;
	while (i < this->num)
	{
		materia[i] = other.materia[i]->clone();
		i++;
	}
}

Character &Character::operator=(Character const &other)
{
	int i;

	i = 0;
	while (i < this->num)
	{
		delete this->materia[i];
		i++;
	}
	this->_name = other.getName();
	this->num = other.num;
	i = 0;
	while (i < this->num)
	{
		materia[i] = other.materia[i]->clone();
		i++;
	}
	return (*this);
}

Character::~Character()
{
	int i;

	i = 0;
	while (i < this->num)
	{
		delete this->materia[i];
		i++;
	}
}