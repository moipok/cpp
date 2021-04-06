/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:26:58 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/27 20:08:55 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void			Span::full_random_mass()
{
	srand(static_cast<unsigned int>(time(0)));
	for (unsigned int i = this->size; i < this->max_size; i++)
		this->addNumber(rand() % 1000);
}

unsigned int	Span::shortestSpan()
{
	if (this->size < 2)
		throw Span::TooHighException(1);
	std::vector<int> arraysort = array;
	std::sort(arraysort.begin(), arraysort.end());
	unsigned int min = UINT32_MAX;
	for (unsigned int i = 0; i < this->size - 1; i++)
		if (static_cast<unsigned int>(arraysort[i + 1] - arraysort[i]) < min)
			min = static_cast<unsigned int>(arraysort[i + 1] - arraysort[i]);
	return min;
}

unsigned int	Span::longestSpan()
{
	if (this->size < 2)
		throw Span::TooHighException(1);
	int max = *std::max_element(this->array.begin(), this->array.end());
	int min = *std::min_element(this->array.begin(), this->array.end());
	return static_cast<unsigned int>(max - min);
}

const char *Span::TooHighException::what() const throw()
{
	return str.c_str();
}

void	Span::addNumber(int num)
{
	if (this->size >= this->max_size)
		throw Span::TooHighException(0);
	this->array.push_back(num);
	this->size++;
}

Span::Span(const Span &other)
{
	this->max_size = other.max_size;
	this->size = other.size;
	for (unsigned int i = 0; i < this->size; i++)
		this->array[i] = other.array[i];
}

Span &Span::operator= (const Span &other)
{
	this->array.clear(); 
	this->max_size = other.max_size;
	this->size = other.size;
	for (unsigned int i = 0; i < this->size; i++)
		this->array[i] = other.array[i];
	return (*this);
}

Span::Span(unsigned int n) : max_size(n), size(0)
{
}

Span::~Span()
{
}