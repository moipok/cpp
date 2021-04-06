/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:07 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/26 17:11:57 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include "iostream"
# include "string"

template <typename T>
void ft_cout(T a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	ft_mapp(T* array, int len, void (f)(T elem))
{
	int i = 0;
	if (!array)
		return ;
	while (i < len)
	{
		f(array[i]);
		i++;
	}
}

#endif