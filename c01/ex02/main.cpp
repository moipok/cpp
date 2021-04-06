/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:20:42 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/11 21:39:20 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie *one;
	ZombieEvent Event;
	Zombie *two;
	Zombie *three;

	one = Event.newZombie("Shreek");
	one->announce();
	two = Event.randomChump();
	three = Event.randomChump();

	delete (three);
	delete (one);
	std::cout << "Aaaaa!!" << std::endl;
	delete (two);
	return(0);
}