/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:08:55 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 18:28:19 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>

class Bureaucrat;

# include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	Bureaucrat() {}
public:

	class GradeTooHighException : public std::exception
	{
	private:
		std::string			_name;
		int					_grade;
	public:
		GradeTooHighException(std::string name, int grade) : _name(name), _grade(grade) { }
		virtual const char *what() const throw();
		virtual ~GradeTooHighException() throw() { }
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string			_name;
		int					_grade;
	public:
		GradeTooLowException(std::string name, int grade) : _name(name), _grade(grade) { }
		virtual const char *what() const throw();
		virtual ~GradeTooLowException() throw() { }
	};

	std::string GetName() const;
	int			GetGrade() const;
	void		PlusGrade();
	void		MinusGrade();
	//___________ex01
	void		signForm(bool b, std::string form_name) const;
	//___________ex02
	void		executeForm(Form const & form) const;
	//___________
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator= (const Bureaucrat &);
	~Bureaucrat() { }
};

std::ostream &operator<< (std::ostream &out, const Bureaucrat &other);

#endif