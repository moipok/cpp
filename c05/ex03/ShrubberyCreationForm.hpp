/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:22:27 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 17:19:41 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	bool execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm &operator= (const ShrubberyCreationForm &);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	virtual ~ShrubberyCreationForm() {};
};


#endif