/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:53:08 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 18:25:00 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice &other_Ice);
		~Ice();
		Ice			&operator=(const Ice &other_Ice);
		AMateria	*clone() const;
		void		use(ICharacter& target);
};

#endif