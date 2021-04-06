/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:33:46 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 17:51:54 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	this->num = 0;
	this->army = nullptr;
}

Squad::Squad(const Squad &other)
{
	this->num = other.num;
	this->army = new ISpaceMarine*[this->num];
	int i;
	i = 0;
	while (i < this->num)
	{
		this->army[i] = other.getUnit(i)->clone();
		i++;
	}
}

Squad::~Squad()
{
	int i;
	
	i = 0;
	while (i < this->num)
	{
		delete this->army[i];
		i++;
	}
	if (this->army)
		delete[] this->army;
	this->army = nullptr;
}

Squad &Squad::operator=(ISquad const &other)
{
	const Squad *tmp = dynamic_cast<Squad *>(const_cast<ISquad *>(&other));
	return (*this = *tmp);
}

Squad &Squad::operator=(Squad const &other)
{
	int i;
	
	i = 0;
	while (i < this->num)
	{
		delete this->army[i];
		i++;
	}
	delete[] this->army;
	this->num = other.num;
	i = 0;
	this->army = new ISpaceMarine*[this->num];
	while (i < this->num)
	{
		this->army[i] = other.getUnit(i)->clone();
		i++;
	}
	return (*this);
}

int Squad::getCount() const
{
	return(this->num);
}

ISpaceMarine* Squad::getUnit(int pos) const
{
	if (pos > this->num || pos < 0 || this->num == 0)
		return (nullptr);
	return(this->army[pos]);
}

int Squad::push(ISpaceMarine* token)
{
	if (token == nullptr)
		return (0);
	if (num == 0)
	{
		num++;
		this->army = new ISpaceMarine*[num];
		army[0] = token;
	}
	else
	{
		int i;
		i = 0;
		while (i < this->num)
		{
			if (this->army[i] == token)
				return (0);
			i++;
		}
		ISpaceMarine **newarmy = new ISpaceMarine*[this->num + 1];
		i = 0;
		while (i < this->num)
		{
			newarmy[i] = this->army[i];
			i++;
		}
		delete[] this->army;
		newarmy[i] = token;
		this->num++;
		this->army = newarmy;
	}
	return (this->num);
}