/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 23:09:50 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/10 23:13:07 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(void)
{
	std::string line = "HI THIS IS BRAIN";
	std::string *ptr = &line;
	std::string &link = line;

	std::cout << "Pointer: " << *ptr << std::endl;
	std::cout << "Link: " << link << std::endl;
	return (0);
}