/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 02:31:05 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/13 02:48:30 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
private:
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::string		tmp;
	int				settmp(void);
	int				writetofile(void);
public:
	int				checkdata(void);
	int				replace(void);
	Replace(std::string filename, std::string s1, std::string s2);
	~Replace();
};


#endif