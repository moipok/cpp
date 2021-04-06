/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:30:10 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 17:53:37 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <unistd.h>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* lol = new AssaultTerminator;
	ISquad* vlc = new Squad;
	ISquad* test = new Squad;
	std::cout << "________________________\n";
	vlc->push(lol);
	vlc->push(bob);
	vlc->push(jim);
	*dynamic_cast<Squad *>(test) = *vlc;
	std::cout << "________________________\n";
	for (int i = 0; i < test->getCount(); ++i) 
	{
		ISpaceMarine* cur = test->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "________________________\n";
	delete vlc;
	std::cout << "________________________\n";
	delete test;
	sleep(10);
	return 0; 
}