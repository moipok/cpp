/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:22:17 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 18:40:15 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
				: Form("ShrubberyCreationForm", 145, 137, target) { }

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (Form::getCheck() == false)
		throw Form::NotSignedException(Form::getName());
	if (executor.GetGrade() > Form::getExec())
		throw Form::GradeTooLowException(Form::getExec(), this->getName());
	std::ofstream	fout;

	fout.open(Form::getTarget() + "_shrubbery");
	if (!fout.is_open())
	{
		std::cout << "Error open " << Form::getTarget() << "_shrubbery" << std::endl;
		return (false);
	}
	fout << "ASCII trees xD";
	fout.close();
	return (true);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &other)
{
	Form::operator=(other);
	return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
		: Form("ShrubberyCreationForm", 145, 137, other.getTarget()) { }