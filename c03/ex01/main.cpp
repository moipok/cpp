/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:41:02 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 13:58:36 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	FragTrap one("Shrek");
	ScavTrap two("Tony Stark");
	ScavTrap tree;
	
	tree = two;
	one.rangedAttack(two.getName());
	two.takeDamage(20);
	two.beRepaired(50);
	one.meleeAttack(two.getName());
	two.takeDamage(30);
	two.challengeNewcomer(one.getName());
}