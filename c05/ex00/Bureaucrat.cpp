/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:09:05 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 13:41:03 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream &operator<< (std::ostream &out, const Bureaucrat &other)
{
	out << "I'am " << other.GetName() << ", i have " << other.GetGrade() << " grade!";
    return out;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name)
{
	this->grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(name, grade);
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException(name,grade);
}


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	std::string a = ("Grade if too high. " + this->_name + " can't be a " + std::to_string(this->_grade) + " grade");
	return a.c_str();
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	std::string a = ("Grade if too low. " + this->_name + " can't be a " + std::to_string(this->_grade) + " grade");
	return a.c_str();
}

void		Bureaucrat::PlusGrade()
{
	this->grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(name, grade);
}
void		Bureaucrat::MinusGrade()
{
	this->grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException(name, grade);
}

std::string Bureaucrat::GetName() const
{
	return (this->name);
}

int			Bureaucrat::GetGrade() const
{
	return (this->grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.GetName())
{
	this->grade = other.GetGrade();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(name, grade);
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException(name,grade);
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &other)
{
	this->grade = other.GetGrade();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(name, grade);
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException(name,grade);
	return (*this);
}