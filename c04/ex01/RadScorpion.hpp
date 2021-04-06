/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:32:23 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:57:04 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
	/* data */
public:
	RadScorpion(/* args */);
	virtual ~RadScorpion();
	RadScorpion &operator= (const RadScorpion &other);
	RadScorpion(const RadScorpion &other);
};

#endif