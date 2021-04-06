/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 02:37:47 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/13 03:01:40 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int				Replace::checkdata(void)
{
	if (this->filename.length() == 0 || 
	this->s1.length() == 0 || this->s1.length() == 0)
	{
		std::cout << "Error data is empty" << std::endl;
		return (1);
	}
	return (0);
}

int				Replace::settmp(void)
{
	std::ifstream	fin;
	char	ch;

	fin.open(filename);
	if (!fin.is_open())
	{
		std::cout << "Error open " << filename << std::endl;
		return (1);
	}
	this->tmp = "";
	while (fin.get(ch))
	{
		this->tmp += ch;
	}
	fin.close();
	return (0);
}

int				Replace::replace(void)
{
	if (this->settmp() == 1)
		return (1);
	int i;
	int l;

	i = 0;
	while (this->tmp.find(this->s1, i) < 100000)
	{
		l = this->tmp.find(this->s1, i) + this->s2.length();
		this->tmp.replace(this->tmp.find(this->s1, i), this->s1.size(), this->s2);
		i = l;
	}
	if (this->writetofile() == 1)
		return (1);
	return (0);
}

int				Replace::writetofile(void)
{
	std::ofstream	fout;

	fout.open(filename + ".replace");
	if (!fout.is_open())
	{
		std::cout << "Error open " << filename << ".replace" << std::endl;
		return (1);
	}
	fout << tmp;
	fout.close();
	return (0);
}

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

Replace::~Replace()
{
}