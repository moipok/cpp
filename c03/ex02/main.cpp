/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:41:02 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 14:22:18 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap one("Shrek");
	ScavTrap two("Tony Stark");
	ScavTrap tree;
	
	std::cout << "----------------" << std::endl;
	two.takeDamage(one.vaulthunter_dot_exe(two.getName()));
	two.challengeNewcomer(one.getName());
	two.meleeAttack(one.getName());
	one.takeDamage(15);
	one.beRepaired(12);
	std::cout << "----------------" << std::endl;
}