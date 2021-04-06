/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 23:05:50 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/11 23:08:04 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string	Human::ft_hex(unsigned long adr)
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

std::string	Human::identify()
{
	return (ft_hex((unsigned long)this->brain));
}

Brain		&Human::getBrain()
{
	return *(this->brain);
}

Human::Human()
{
	this->brain = new Brain;
}

Human::~Human()
{
	delete this->brain;
}