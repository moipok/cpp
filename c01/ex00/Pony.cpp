/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:30:15 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/09 23:12:26 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int years)
{
	this->name = name;
	this->years = years;
	std::cout << "Hello, my name is " << name << std::endl;
}

Pony::~Pony()
{
	std::cout << "Bye I am " << name << std::endl;
}