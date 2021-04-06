/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:26:43 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/28 15:13:12 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<char > arr(5);

	for (int i = 0; i < 5; i++)
	{
		arr[i] = i + 48;
		std::cout << arr[i];
	}
	std::cout << std::endl;
	try
	{
		if (arr[30])
			;
	}
	catch(const std::exception& e)
	{
		std::cout << "Error:\n";
		std::cout << e.what() << '\n';
	}
	Array<char > arr2(10);
	for (int i = 0; i < 10; i++)
		arr2[i] = i + 60;
	arr = arr2;
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
	Array<char > arr3(arr);
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr3[i];
	}
	std::cout << std::endl;
	// sleep(10);
}