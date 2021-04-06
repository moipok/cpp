/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:23:22 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 18:27:27 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	bool execute(Bureaucrat const & executor) const;

	PresidentialPardonForm &operator= (const PresidentialPardonForm &);
	PresidentialPardonForm(const PresidentialPardonForm &);
	virtual ~PresidentialPardonForm() {};
};

#endif
