/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:40:59 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 14:11:53 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	void			setDefaultValues(void);
public:
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	int				vaulthunter_dot_exe (std :: string const & target);
	FragTrap 		&operator=(FragTrap const & other);
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
};

#endif