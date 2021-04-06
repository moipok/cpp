/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:30:25 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/09 23:15:20 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main(void)
{
	Pony first_pony("Rainbow Dash", 5);
	Pony *second_pony = new Pony("Pinkie Pie", 4);
	
	delete (second_pony);
	std::cout << "end of program" << std::endl;
	return (0);
}