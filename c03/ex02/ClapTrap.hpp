/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:09:16 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/18 14:15:41 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string		name;
	int				hit_points;
	int				max_hit_points;
	int				energy_points;
	int				max_energy_points;
	int				level;
	int				melee_damage;
	int				ranged_damage;
	int				armor_reduction;
public:
	void			setEnergy_points(int energy);
	std::string		getName(void) const;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	ClapTrap 		&operator=(ClapTrap const & other);
	ClapTrap(std::string name);
	ClapTrap();
	~ClapTrap();
};

#endif