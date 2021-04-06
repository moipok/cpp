/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:44:10 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/27 16:20:11 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream> 
# include <errno.h>
# include <algorithm>

template <typename Container>
int		easyfind(Container array, int num)
{
	if ((std::find(array.begin(), array.end(), num)) == array.end())
		return 0;
	return 1;
}

#endif