/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:51:43 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 18:25:16 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other_MateriaSource);
		~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &other_MateriaSource);
		void			learnMateria(AMateria*);
		AMateria		*createMateria(std::string const & type);
	private:
		AMateria	*materia_Source_content[4];
};

#endif