/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:35:04 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 16:05:38 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(/* args */) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator= (const RadScorpion &other)
{
	Enemy::operator=(other);
	return(*this);
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other)
{
	std::cout << "* click click click *" << std::endl;
}