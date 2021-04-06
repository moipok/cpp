/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:51:01 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 16:39:25 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <exception>
# include <iostream>

class Form;

# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				check;
	const int			grade;
	const int			exec;
	Form() : grade(0), exec(0) {}
public:
	class GradeTooHighException : public std::exception
	{
	private:
		int					_grade;
		std::string			_form_name;
	public:
		GradeTooHighException(int grade, std::string form_name)
						: _grade(grade), _form_name(form_name) { }
		virtual const char *what() const throw();
		virtual ~GradeTooHighException() throw() { }
	};

	class GradeTooLowException : public std::exception
	{
	private:
		int					_grade;
		std::string			_form_name;
		std::string			_bur_name;
	public:
		GradeTooLowException(int grade, std::string form_name)
						: _grade(grade), _form_name(form_name) { }
		GradeTooLowException(int grade, std::string form_name, std::string bur_name)
						: _grade(grade), _form_name(form_name), _bur_name(bur_name) { }
		virtual const char *what() const throw();
		virtual ~GradeTooLowException() throw() { }
	};
	std::string getName() const;
	bool		getCheck() const;
	int			getGrade() const;
	bool		beSigned(const Bureaucrat &);
	Form &operator= (const Form &);
	Form(const std::string name, const int grade);
	Form(const Form &);
	~Form() { }
};

std::ostream &operator<< (std::ostream &out, const Form &other);

#endif