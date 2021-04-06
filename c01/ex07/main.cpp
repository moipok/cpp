/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:37:38 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/14 10:16:53 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error arguments" << std::endl;
		return (1);
	}
	
	Replace		re(av[1], av[2], av[3]);

	if (re.checkdata() == 1)
	{
		std::cout << "error" << std::endl;
		return (1);
	}
	if (re.replace() == 1)
	{
		std::cout << "error" << std::endl;
		return (1);
	}	
	return (0);
}