/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 23:08:23 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/11 23:09:31 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify()
{
	return (ft_hex((unsigned long)this));
}

std::string	Brain::ft_hex(unsigned long adr)
{
	std::string s;
	char c[17] = "0123456789ABCDEF";
	while(adr)
	{
		s += (char)c[adr % 16];
		adr /= 16;
	}
	s += 'x';
	s += '0';
	reverse(s.begin(),s.end());
	return (s);
}