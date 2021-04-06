/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:00:20 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 17:19:04 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap 
{
private:
	void			setDefaultValues(void);
public:
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	SuperTrap 		&operator=(SuperTrap const & other);
	SuperTrap(std::string name);
	SuperTrap();
	~SuperTrap();
};



#endif