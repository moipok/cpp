/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 09:42:07 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/16 11:06:30 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int Fixed::toInt( void ) const
{
	return (int)(this->raw >> 8);
}

float Fixed::foFloat(void) const
{
	return ((float)this->raw / (float)256);
}

std::ostream &operator<< (std::ostream &out, const Fixed &other)
{
    out << other.foFloat();
 
    return out;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = raw << 8;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = (int)(roundf(raw * 256));
}

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
	this->raw = other.raw;
	return (*this);
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
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
