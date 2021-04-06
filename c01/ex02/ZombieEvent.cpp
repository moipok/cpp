/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:31:34 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/10 20:52:46 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string	ZombieEvent::setZombieType()
{
	std::string type;

	std::cout << "Enter zombie type :" << std::endl;
	std::cin >> type;
	return (type);
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie *man = new Zombie;
	man->SetName(name);
	man->SetType(setZombieType());
	return(man);
}

Zombie*		ZombieEvent::randomChump()
{
	Zombie *man = new Zombie;
	std::string	names[4] = {"Biba", "Boba", "Vupsen", "Pupsen"};
	std::string	types[4] = {"Tiny", "Normal", "Fat", "Poison"};

	man->SetType(types[rand() % 4]);
	man->SetName(names[rand() % 4]);
	man->announce();
	return (man);
}