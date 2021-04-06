/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 09:42:09 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/16 11:09:18 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					raw;
	static const int	bits = 8;
public:
	Fixed(const Fixed &other);
	Fixed();
	~Fixed();
	Fixed	&operator= (const Fixed &other);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif