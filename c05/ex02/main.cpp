/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:09:13 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/08 16:39:25 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	{
		try
		{
			std::cout << "_____________________" << std::endl;
			Bureaucrat biba("Biba", 10);
			std::cout << biba << std::endl;
			ShrubberyCreationForm pasport("pasport");
			pasport.beSigned(biba);
			biba.executeForm(pasport);
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
			PresidentialPardonForm pasport("pasport");
			pasport.beSigned(biba);
			biba.executeForm(pasport);
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
			Bureaucrat biba("Biba", 2);
			std::cout << biba << std::endl;
			RobotomyRequestForm pasport("pasport");
			pasport.beSigned(biba);
			biba.executeForm(pasport);
		}
		catch(const std::exception& e)
		{
			std::cout << "ERROR:" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}
}