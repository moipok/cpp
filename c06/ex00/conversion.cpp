/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:35:23 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/25 17:36:56 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassNum.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
	Num a(av[1]);
	a.ft_show();
}