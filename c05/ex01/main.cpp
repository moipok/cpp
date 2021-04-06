/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:09:13 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 15:44:10 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		try
		{
			std::cout << "_____________________" << std::endl;
			Bureaucrat biba("Biba", 150);
			std::cout << biba << std::endl;
			Form pasport("pasport", 5);
			pasport.beSigned(biba);
		}
		catch(const std::exception& e)
		{
			std::cout << "ERROR:" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << "_____________________" << std::endl;
			Bureaucrat biba("Biba", 1);
			std::cout << biba << std::endl;
			Form pasport("pasport", 5);
			std::cout << pasport << std::endl;
			pasport.beSigned(biba);
			std::cout << pasport << std::endl;
			pasport.beSigned(biba);
		}
		catch(const std::exception& e)
		{
			std::cout << "ERROR:" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}
		{
		try
		{
			std::cout << "_____________________" << std::endl;
			Form pasport("pasport", -5);
		}
		catch(const std::exception& e)
		{
			std::cout << "ERROR:" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}
}