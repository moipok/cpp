/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:02:04 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 16:28:45 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer &Sorcerer::operator= (const Sorcerer &other)
{
	if (&other == this)
		return (*this);
	this->name = other.name + "_copy";
	this->title = other.title + "_copy";
	return (*this);
}

void		Sorcerer::polymorph(Victim const &other)
{
	other.getPolymorphed();
}

std::string Sorcerer::getName(void) const
{
	return(this->name);
}

std::string Sorcerer::getTitle(void) const
{
	return(this->title);
}

std::ostream &operator<< (std::ostream &out, const Sorcerer &other)
{
    out << "I'am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!" << std::endl;
    return out;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", is born!" << std:: endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
	this->name = other.name + "_copy";
	this->title = other.title + "_copy";
}