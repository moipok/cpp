/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:40:59 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/17 19:28:26 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
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
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	int				vaulthunter_dot_exe (std :: string const & target);
	FragTrap 		&operator=(FragTrap const & other);
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
};

#endif