/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:02:02 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:44:57 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	void		getPolymorphed() const;
	Peon(std::string name);
	Peon &operator= (const Victim &other);
	Peon(const Peon &other);
	virtual ~Peon();
};



#endif