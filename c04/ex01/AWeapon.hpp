/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:21:54 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 15:48:10 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string.h>
# include <iostream>

class AWeapon
{
private:
	std::string 		name;
	int					damage;
	int					apcost;
	AWeapon();
public:
	std::string virtual getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void		attack() const = 0;
	AWeapon(const AWeapon &);
	AWeapon &operator= (const AWeapon &other);
	AWeapon(std::string const & name, int apcost, int damage);
	virtual			~AWeapon();
};

#endif