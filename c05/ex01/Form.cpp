/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:04:15 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 16:40:37 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

bool		Form::beSigned(const Bureaucrat &other)
{
	if (this->getCheck() == true)
	{
		other.signForm(false, this->name);
		return (false);
	}
	if (other.GetGrade() <= this->getGrade())
		this->check = true;
	else
		throw Form::GradeTooLowException(this->grade, this->name, other.GetName());
	other.signForm(true, this->name);
	return (true);
}

const char *Form::GradeTooHighException::what() const throw()
{
	std::string a = ("Grade if too high. " + this->_form_name + " can't be a " + std::to_string(this->_grade) + " grade");
	return a.c_str();
}

const char *Form::GradeTooLowException::what() const throw()
{
	std::string a;
	if (GradeTooLowException::_bur_name.empty())
		a = ("Grade if too low. " + this->_form_name + " can't be a " + std::to_string(this->_grade) + " grade");
	else
		a = this->_bur_name + "'s grade is too low to sign";
	return a.c_str();
}

Form &Form::operator= (const Form &other)
{
	this->check = other.getCheck();
	return (*this);
}

Form::Form(const std::string name, const int grade) : name(name), grade(grade), exec(0)
{
	this->check = false;
	if (grade < 1)
		throw Form::GradeTooHighException(grade, name);
	else if (grade > 150)
		throw Form::GradeTooLowException(grade, name);
}

Form::Form(const Form &other) : name(other.name), grade(other.grade), exec(other.exec) 
{
	this->check = other.getCheck();
}

std::string Form::getName() const
{
	return (this->name);
}

bool		Form::getCheck() const
{
	return (this->check);
}

int			Form::getGrade() const
{
	return (this->grade);
}

std::ostream &operator<< (std::ostream &out, const Form &other)
{
	out << "Form " << other.getName() << ", have " << other.getGrade() << " grade! end check is ";
    if (other.getCheck() == false)
		out << " is not signed";
	else
		out << " signed";
	return out;
}
