/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 22:09:25 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/11 21:42:19 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int sum)
{
	int i;
	std::string	names[4] = {"Biba", "Boba", "Vupsen", "Pupsen"};
	std::string	types[3] = {"Tiny", "Fat", "Poison"};

	i = 0;
	this->sum = sum;
	this->all_zombie = new Zombie[sum];
	while (i < sum)
	{
		all_zombie[i].SetName(names[rand() % 4]);
		all_zombie[i].SetType(types[rand() % 3]);
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] (this->all_zombie);
	std::cout << "all dead" << std::endl;
}

void		ZombieHorde::announce(void)
{
	int i;

	i = 0;
	while (i < this->sum)
	{
		std::cout << "(" << this->all_zombie[i].GetName() << \
		" " << this->all_zombie->GetType() << ") ARR BRAINZZZ" << std::endl;
		i++;
	}
}