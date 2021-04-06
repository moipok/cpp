/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 17:25:41 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/26 20:20:31 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include "iostream"
# include "string"
# include "exception"
# include <unistd.h>

class SegExceptionn : public std::exception
{
private:
	int n;
	std::string errorMsg;
public:
	SegExceptionn(int index) : n(index) { this->errorMsg = "Segfault " +  std::to_string(this->n); }
	virtual const char *what() const throw();
	virtual ~SegExceptionn() throw() { }
};

template <typename T>
class Array
{
private:
	T* mass;
	unsigned int len;
public:
	T& operator[] (const int index)
	{
		if (index > static_cast<int >(len))
			throw SegExceptionn(index);
		return mass[index];
	}
	const T& operator[] (const int index) const
	{
		if (index > static_cast<int >(len))
			throw SegExceptionn(index);
		return mass[index];
	}
	Array(const Array &other)
	{
		if (other.mass == NULL)
			this->mass = NULL;
		else
		{
			this->len = other.len;
			this->mass = new T[this->len];
			for (int i = 0; i < static_cast<int >(this->len); i++)
				this->mass[i] = other.mass[i];
		}
	}
	Array &operator= (const Array &other)
	{
		if (other.mass == NULL)
			this->mass = NULL;
		else
		{
			delete[] this->mass;
			this->len = other.len;
			this->mass = new T[this->len];
			for (int i = 0; i < static_cast<int >(this->len); i++)
				this->mass[i] = other.mass[i];
		}
		return (*this);
	}
	unsigned int get_size() const {return len;}
	Array() :len(0) {mass = NULL;}
	Array(unsigned int n) :len(n) {mass = new T[n];}
	~Array() {if (mass) delete[] mass;}
};

#endif