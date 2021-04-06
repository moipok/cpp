/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 09:42:09 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/16 11:10:38 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					raw;
	static const int	bits = 8;
public:
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed(const Fixed &other);
	Fixed();
	~Fixed();
	int		getRawBits( void ) const;
	Fixed	&operator= (const Fixed &other);
	void	setRawBits( int const raw );
	float	foFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator<< (std::ostream &out, const Fixed &other);

#endif