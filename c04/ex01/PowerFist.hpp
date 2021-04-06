/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:42:04 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:54:03 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	/* data */
public:
	void		attack() const;
	PowerFist(/* args */);
	virtual ~PowerFist();
	PowerFist &operator= (const PowerFist &other);
	PowerFist(const PowerFist &other);
};

#endif