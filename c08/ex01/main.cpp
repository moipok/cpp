/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:26:45 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/28 17:27:13 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "___________________________" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(17);
		sp.addNumber(-2000000000);
		sp.addNumber(9);
		sp.addNumber(2000000000);
		sp.addNumber(11);
		std::cout << "shortest = " << sp.shortestSpan() << std::endl;
		std::cout << "longest = " << sp.longestSpan() << std::endl;
	}
	std::cout << "___________________________" << std::endl;
	{
		try
		{
			Span s = Span(1);
			s.addNumber(1);
			s.addNumber(200);
			std::cout << "HELLO" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "___________________________" << std::endl;
	{
		Span s = Span(1);
		s.addNumber(1);
		try
		{
			std::cout << "shortest = " << s.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "longest = " << s.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "___________________________" << std::endl;
	{
		Span s = Span(10);
		s.full_random_mass();
		std::cout << "shortest = " << s.shortestSpan() << std::endl;
		std::cout << "longest = " << s.longestSpan() << std::endl;
	}
	std::cout << "___________________________" << std::endl;
}