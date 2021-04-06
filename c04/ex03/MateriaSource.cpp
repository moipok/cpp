/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 18:19:41 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:38:19 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *other)
{
	if (this->num == 4 || other == nullptr)
		return ;
	materia[this->num] = other->clone();
	this->num++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	while (i < this->num)
	{
		if (this->materia[i]->getType() == type)
			return this->materia[i]->clone();
		i++;
	}
	return nullptr;
}

MateriaSource::MateriaSource()
{
	this->num = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	int i;
	this->num = other.num;
	i = 0;
	while (i < this->num)
	{
		this->materia[i] = other.materia[i]->clone();
		i++;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	int i;

	i = 0;
	while (i < this->num)
	{
		delete this->materia[i];
		i++;
	}
	this->num = other.num;
	i = 0;
	while (i < this->num)
	{
		this->materia[i] = other.materia[i]->clone();
		i++;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	int i;

	i = 0;
	while (i < this->num)
	{
		delete this->materia[i];
		i++;
	}
}