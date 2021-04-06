/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:11:13 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/10 20:25:05 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string name;
	std::string type;
public:
	void		announce(void);
	void		SetName(std::string name);
	void		SetType(std::string type);
	std::string GetName(void);
	std::string GetType(void);
	//Zombie(std::string name, std::string type);
	Zombie();
	~Zombie();
};

#endif