/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:02:07 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 16:28:13 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string.h>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string	name;
	std::string title;
	Sorcerer();
public:
	std::string getName(void) const;
	std::string getTitle(void) const;
	void		polymorph (Victim const &);
	Sorcerer	&operator= (const Sorcerer &other);
	Sorcerer(const Sorcerer &other);
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
};

std::ostream &operator<< (std::ostream &out, const Sorcerer &other);

#endif