/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:02:12 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 16:37:32 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTUM_HPP
# define VICTUM_HPP

# include <iostream>
# include <string.h>

class Victim
{
protected:
	std::string			name;
	Victim();
public:
	std::string			getName(void) const;
	virtual void		getPolymorphed() const;
	Victim				&operator= (const Victim &other);
	Victim(std::string name);
	Victim(const Victim &other);
	virtual ~Victim();
};

std::ostream &operator<< (std::ostream &out, const Victim &other);

#endif
