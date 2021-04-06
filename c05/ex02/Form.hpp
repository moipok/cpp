/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:51:01 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 17:26:11 by fbarbera         ###   ########.fr       */
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
	std::string			target;
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
	
	class NotSignedException : public std::exception
	{
	private:
		std::string			_form_name;
	public:
		NotSignedException(std::string form_name)
						: _form_name(form_name) { }
		virtual const char *what() const throw();
		virtual ~NotSignedException() throw() { }
	};

	std::string getName() const;
	bool		getCheck() const;
	int			getGrade() const;
	int			getExec() const;
	std::string getTarget() const;
	bool		beSigned(const Bureaucrat &);
	Form &operator= (const Form &);
	Form(const std::string name, const int grade, const int exec, std::string target);
	Form(const std::string name, const int grade);
	Form(const Form &);
	virtual bool execute(Bureaucrat const & executor) const = 0;
	virtual ~Form() { }
};

std::ostream &operator<< (std::ostream &out, const Form &other);

#endif