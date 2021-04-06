/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassNum.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:06:58 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/28 13:14:31 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassNum.hpp"

void	Num::ft_pars()
{
	if (this->a == "nan" || this->a == "+inff" || this->a == "-inff" || this->a == "inff"
		|| this->a == "nanf" || this->a == "+inf" || this->a == "-inf" || this->a == "inf")
		if (a == "nan" || a == "nanf")
			this->expec = NANN;
		else if (a == "inf" || a == "inff" || a == "+inf" || a == "+inff")
			this->expec = INF;
		else
			this->expec = MINF; 
	else if (a.length() == 1 && (a[0] < '0' || a[0] > '9'))
	{
		this->d = static_cast<double>(a[0]);
		this->expec = CHARR;
	}
	else
	{
		unsigned long i;
		i = 0;
		while(i < this->a.length())
		{
			if ((a[i] >= '0' && a[i] <= '9') || a[i] == '.' || (a[i] == '-' &&  i == 0) 
			|| (a[i] == 'f' && i == a.length() - 1))
				i++;
			else
			{
				this->expec = BAD;
				break ;
			}
		}
	}
	if (this->expec != BAD && this->expec != CHARR)
	{
		this->d = strtod(this->a.c_str(), NULL);
	}
	if (this->expec == CHARR)
		this->expec = NORM;
}

void	Num::show_c() const
{
	int i = static_cast<int>(d);
	if (i >= 33 && i <= 126)
		std::cout << "Char " << static_cast<char>(d) << std::endl;
	else
		std::cout << "Char impossible" << std::endl;
	}

void	Num::show_i() const
{
	if (this->expec != NORM)
	{
		std::cout << "Int impossible" << std::endl;
	}
	else
	{
		double q;
		modf(d, &q);
		if (q >= -2147483648 && q <= 2147483647)
			std::cout << "int " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int impossible" << std::endl;
	}
}

void	Num::show_f() const
{
	std::cout << "Float ";
	if (this->expec == NORM)
	{
		double q;
		if (modf(d, &q) == 0)
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d);
		else 
			std::cout << static_cast<float>(d);
	}
	else
		std::cout << static_cast<float>(d);
	std::cout << "f" << std::endl;
}

void	Num::show_d() const
{
	std::cout << "Double ";
	if (this->expec == NORM)
	{
		double q;
		if (modf(d, &q) == 0)
			std::cout << std::fixed << std::setprecision(1) << d;
		else 
			std::cout << d;
	}
	else
		std::cout << d;
	std::cout << std::endl;
}

void	Num::ft_show() const
{
	if (this->expec == BAD)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	this->show_c();
	this->show_i();
	this->show_f();
	this->show_d();
}

Num::Num(std::string a)
{
	this->a = a;
	this->expec = NORM;
	this->ft_pars();
}

Num &Num::operator= (const Num &other)
{
	this->a = other.a;
	this->d = other.d;
	this->expec = other.expec;
	return (*this);
}

Num::Num(const Num &other)
{
	this->a = other.a;
	this->d = other.d;
	this->expec = other.expec;
}

Num::~Num()
{
}
