/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:09:13 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/08 16:37:34 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Bureaucrat biba("Biba", 149);
			std::cout << biba << std::endl;
			biba.MinusGrade();
			std::cout << biba << std::endl;
			biba.PlusGrade();
			std::cout << biba << std::endl;
			biba.MinusGrade();
			biba.MinusGrade();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat boba("Boba", 0);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}