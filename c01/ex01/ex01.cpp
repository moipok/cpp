/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 23:26:39 by fbarbera          #+#    #+#             */
/*   Updated: 2021/01/09 23:32:18 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
//#include <unistd.h>

void memoryLeak() {
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete (panther);
}

int main(void)
{
	memoryLeak();
	//sleep(10);
	return (0);
}