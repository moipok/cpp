/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:34:16 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:53:54 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	/* data */
public:
	void		attack() const;
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle &operator= (const PlasmaRifle &other);
	PlasmaRifle(const PlasmaRifle &);
};


#endif