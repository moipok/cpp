/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 19:59:38 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 13:56:06 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap
{
private:
	std::string		name;
	int				hit_points;
	int				max_hit_points;
	int				energy_points;
	int				max_energy_points;
	int				level;
	int				melee_damage;
	int				ranged_damage;
	int				armor_reduction;
	void			setDefaultValues(void);
public:
	std::string		getName(void) const;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	ScavTrap 		&operator=(ScavTrap const & other);
	void			challengeNewcomer (std :: string const & target);
	ScavTrap(std::string name);
	ScavTrap();
	~ScavTrap();
};


#endif