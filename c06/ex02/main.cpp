/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:43:59 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/26 15:14:41 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base *generate(void)
{
    srand(static_cast<unsigned int>(time(0)));
	int R = rand() % 3;
	if (R == CLASS_A)
		return (new A);
	else if (R == CLASS_B)
		return (new B);
	else
		return (new C);
}

void identify_from_pointer(Base *p)
{
	A *chA = dynamic_cast<A*>(p);
	if (chA)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *chB = dynamic_cast<B*>(p);
	if (chB)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *chC = dynamic_cast<C*>(p);
	if (chC)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void identify_from_reference(Base &p)
{
	A *chA = dynamic_cast<A*>(&p);
	if (chA)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *chB = dynamic_cast<B*>(&p);
	if (chB)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *chC = dynamic_cast<C*>(&p);
	if (chC)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

int main()
{
	Base *p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
}