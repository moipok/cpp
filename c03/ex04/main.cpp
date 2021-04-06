/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:41:02 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 17:24:14 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	FragTrap one("Shrek");
	ScavTrap two("Tony Stark");
	SuperTrap tree("Ninja");
	NinjaTrap ninja4("Dog ninja");
	
	std::cout << "----------------" << std::endl;
	tree.ninjaShoebox(two);
	tree.ninjaShoebox(one);
	tree.ninjaShoebox(ninja4);
	one.takeDamage(tree.vaulthunter_dot_exe(one.getName()));
	std::cout << "----------------" << std::endl;
}