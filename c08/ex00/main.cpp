/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:43:44 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/28 17:24:23 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
// #include <deque>

int main()
{
	std::vector<int> vect;
    for (int count=0; count < 10; ++count)
        vect.push_back(9 - count);
    for (int index=0; index < static_cast<int >(vect.size()); ++index)
        std::cout << vect[index] << ' ';
	std::cout << std::endl;
	std::cout << easyfind(vect, 5) << " - find 5"<< std::endl;
	std::cout << easyfind(vect, 0) << " - find 0"<< std::endl;
	std::cout << easyfind(vect, 10) << " - find 10"<< std::endl;
	std::cout << easyfind(vect, 256) << " - find 256"<< std::endl;
}