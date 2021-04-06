/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 18:09:56 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/04 15:26:22 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materia[4];
	int			num;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(MateriaSource const &other);
	virtual		~MateriaSource();
	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif