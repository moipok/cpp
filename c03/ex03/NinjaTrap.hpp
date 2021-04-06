/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:32:13 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 15:18:14 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
	void			setDefaultValues(void);
public:
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	NinjaTrap 		&operator=(NinjaTrap const & other);
	void			ninjaShoebox(NinjaTrap &Trap);
	void			ninjaShoebox(ScavTrap &Trap);
	void			ninjaShoebox(FragTrap &Trap);
	void			ninjaShoebox(ClapTrap &Trap);
	NinjaTrap(std::string name);
	NinjaTrap();
	~NinjaTrap();
};


#endif