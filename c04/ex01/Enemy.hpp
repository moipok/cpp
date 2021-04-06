/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:12:28 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/25 15:53:19 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string.h>
# include <iostream>

class Enemy
{
private:
	int			hit_points;
	std::string	type;
	Enemy();
public:
	std::string virtual	getType() const;
	int					getHP() const;
	virtual void		takeDamage(int);
	Enemy(int hp, std::string const & type);
	Enemy &operator= (const Enemy &other);
	Enemy(const Enemy &other);
	virtual ~Enemy();
};

#endif