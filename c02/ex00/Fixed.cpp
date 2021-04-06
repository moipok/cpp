/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 09:42:07 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/16 11:08:46 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw);
}

void	Fixed::setRawBits( int const raw )
{
	this->raw = raw;
}

Fixed &Fixed::operator= (const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other)
	{
		std::cout << "hello?" << std::endl;
		return (*this);
	}
	this->raw = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->raw = other.getRawBits();
}

Fixed::Fixed()
{
	this->raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
