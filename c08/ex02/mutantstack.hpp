/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:28:46 by fbarbera          #+#    #+#             */
/*   Updated: 2021/03/01 13:36:29 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : virtual public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (this->c.begin()); }
	iterator end() { return (this->c.end()); }
	MutantStack(const MutantStack& __q) : std::stack<T>(__q.c) {}
	MutantStack& operator=(const MutantStack& __q) {this->c = __q.c; return *this;}
	MutantStack() _NOEXCEPT_(is_nothrow_default_constructible<container_type>::value) {}
	virtual ~MutantStack() {}
};


#endif