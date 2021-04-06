/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:09:13 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/08 16:41:00 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		try
		{
			std::cout << "_____________________" << std::endl;
			Bureaucrat biba("Biba", 1);
			std::cout << biba << std::endl;
			Intern intern;
			Form *pasport = intern.makeForm("presidential pardon", "target");
			std::cout << *pasport << std::endl;
			pasport->beSigned(biba);
			pasport->execute(biba);
			delete pasport;
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
			Intern intern;
			Form *pasport = intern.makeForm("Lalalala", "target");
			std::cout << *pasport << std::endl;
			pasport->beSigned(biba);
			pasport->execute(biba);
			delete pasport;
		}
		catch(const std::exception& e)
		{
			std::cout << "ERROR:" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}
}