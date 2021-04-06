/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:06:39 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/08 15:15:00 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include <exception>

class Intern
{
public:
	Form	*makeForm(std::string name, std::string title);
	int		mapping(std::string ) const;
	Intern	&operator= (const Intern &);
	class NotTypeException : public std::exception
	{
	private:
		std::string			_form_name;
	public:
		NotTypeException(std::string form_name)
						: _form_name(form_name) { }
		virtual const char *what() const throw();
		virtual ~NotTypeException() throw() { }
	};
	Intern() {}
	Intern(const Intern &) {}
	~Intern() {}
};



#endif