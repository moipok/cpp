/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:06:47 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/08 15:18:32 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <exception>

#define PRESIDENTIAL_PARDON 0
#define ROBOTOMY_REQUEST 1
#define SHRUBBERY_CREATION 2

Intern &Intern::operator= (const Intern &)
{
	return (*this);
}

int		Intern::mapping(std::string str) const
{
	std::string type[4] = {"presidential pardon" ,"robotomy request", "shrubbery creation", ""};
	int i;
	i = 0;
	while (i < 4)
	{
		if (str == type[i])
			return i;
		i++;
	}
	return i;
}

Form *Intern::makeForm(std::string name, std::string title)
{
	switch	 (this->mapping(name))
	{
    	case PRESIDENTIAL_PARDON:	return (new PresidentialPardonForm(title));		break;
    	case ROBOTOMY_REQUEST:		return (new RobotomyRequestForm(title));		break;
    	case SHRUBBERY_CREATION:	return (new ShrubberyCreationForm(title));		break;
    	default:					throw Intern::NotTypeException(name);			break;
	}
}

const char *Intern::NotTypeException::what() const throw()
{
	std::string a = ("Form \"" + this->_form_name + "\" is not found");
	return a.c_str();
}