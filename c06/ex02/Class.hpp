/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:45:01 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/26 15:07:03 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <string>
# include <iostream>
# include <cstdlib> // для функций rand() и srand()
# include <ctime>

# define CLASS_A 0
# define CLASS_B 1
# define CLASS_C 2

class Base
{
public:
	virtual ~Base() {}
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

#endif