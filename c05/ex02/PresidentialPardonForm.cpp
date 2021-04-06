/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:23:12 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 18:40:03 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target)
				: Form("PresidentialPardonForm", 25, 5, target) { }

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (Form::getCheck() == false)
		throw Form::NotSignedException(Form::getName());
	if (executor.GetGrade() > Form::getExec())
		throw Form::GradeTooLowException(Form::getExec(), this->getName());
	std::cout << Form::getTarget() << "has been pardoned by Zafod Beeblebrox" << std::endl;
	return (true);
}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &other)
{
	Form::operator=(other);
	return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
		: Form("PresidentialPardonForm", 25, 5, other.getTarget()) { }