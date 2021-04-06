/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:22:45 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 18:40:11 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
				: Form("RobotomyRequestForm", 72, 45, target) { }

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (Form::getCheck() == false)
		throw Form::NotSignedException(Form::getName());
	if (executor.GetGrade() > Form::getExec())
		throw Form::GradeTooLowException(Form::getExec(), this->getName());
	if (rand() % 2)
		std::cout << Form::getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << Form::getTarget() << " has been robotomized failure" << std::endl;
	return (true);
}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &other)
{
	Form::operator=(other);
	return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
		: Form("RobotomyRequestForm", 72, 45, other.getTarget()) { }