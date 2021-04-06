/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:36:43 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 15:52:07 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string.h>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int			action_points;
	AWeapon		*weapon;
	Character();
public:
	Character(std::string const & name);
	virtual ~Character();
	void			recoverAP();
	void			equip(AWeapon*);
	void			attack(Enemy*);
	int				getAP() const;
	bool			getWeapon() const;
	std::string		getWeaponName() const;
	std::string virtual getName() const;
	Character(const Character &other);
	Character &operator= (const Character &other);
};

std::ostream &operator<< (std::ostream &out, const Character &other);


#endif