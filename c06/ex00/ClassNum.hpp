/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassNum.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:04:44 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/25 17:41:59 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSNUM_HPP
# define CLASSNUM_HPP

# include <stdlib.h>
# include <string>
# include <iostream>
# include <math.h>
# include <iomanip>

# define NORM 0
# define NANN 1
# define INF 2
# define MINF 3
# define BAD 4
# define CHARR 5

class Num
{
private:
	std::string a;
	double	d;
	int		expec;
	void	ft_pars();
	void	show_c() const;
	void	show_i() const;
	void	show_f() const;
	void	show_d() const;
	Num() {}
public:
	void	ft_show() const;
	Num(std::string a);
	Num &operator= (const Num &other);
	Num(const Num &other);
	~Num();
};

#endif