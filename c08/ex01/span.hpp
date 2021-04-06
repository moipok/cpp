/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:27:08 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/27 19:58:49 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream> 
# include <errno.h>
# include <algorithm>
# include <vector>
# include <exception>
# include <cstdlib> // для функций rand() и srand()
# include <ctime>

class Span
{
private:
	std::vector<int> array;
	unsigned int max_size;
	unsigned int size;
	Span() {}
public:
	class TooHighException : public std::exception
	{
	private:
			std::string str;
	public:
			TooHighException(int flag) {
				if (flag == 0)
					str = "Sorry - segfault";
				else
					str = "no span";
			}
			virtual const char *what() const throw();
			virtual ~TooHighException() throw() { }
	};
	void			full_random_mass();
	void			addNumber(int num);
	unsigned int	longestSpan();
	unsigned int	shortestSpan();
	Span(unsigned int n);
	Span(const Span &other);
	Span &operator= (const Span &other);
	~Span();
};

#endif