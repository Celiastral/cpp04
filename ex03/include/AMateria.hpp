/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:41:59 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 18:26:40 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &other_AMateria);
		virtual ~AMateria();
		AMateria			&operator=(const AMateria &other_AMateria);
		std::string const	&getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void 		use(ICharacter& target);
	protected:
		std::string	type;
};

#endif