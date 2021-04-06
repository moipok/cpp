/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:41:02 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/17 18:42:16 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap one("Shrek");
	FragTrap two("Tony Stark");
	FragTrap tree;
	
	tree = one;
	one.rangedAttack(two.getName());
	two.takeDamage(20);
	two.beRepaired(50);
	one.meleeAttack(two.getName());
	two.takeDamage(30);
	one.takeDamage(two.vaulthunter_dot_exe(one.getName()));
}