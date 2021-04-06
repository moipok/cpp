/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:28:23 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/28 19:39:27 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <deque>

int main()
{
	MutantStack<int> mstack;
	std::deque<int > l;
	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	mstack.push(-4);
	mstack.push(5);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "______________________" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
		std::cout << "______________________" << std::endl;
	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;
	std::cout << s.size() << std::endl;
	return 0;
}