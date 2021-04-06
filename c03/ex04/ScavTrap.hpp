/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 19:59:38 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 14:11:47 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	void			setDefaultValues(void);
public:
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	ScavTrap 		&operator=(ScavTrap const & other);
	void			challengeNewcomer (std :: string const & target);
	ScavTrap(std::string name);
	ScavTrap();
	~ScavTrap();
};


#endif