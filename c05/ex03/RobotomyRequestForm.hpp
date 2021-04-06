/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:22:54 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/05 17:42:40 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	bool execute(Bureaucrat const & executor) const;

	RobotomyRequestForm &operator= (const RobotomyRequestForm &);
	RobotomyRequestForm(const RobotomyRequestForm &);
	virtual ~RobotomyRequestForm() {};
};


#endif