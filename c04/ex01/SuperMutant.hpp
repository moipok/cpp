/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:22:08 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:56:58 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
	/* data */
public:
	void		takeDamage(int);
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant &operator= (const SuperMutant &other);
	SuperMutant(const SuperMutant &other);
};


#endif