/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:53:43 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 18:24:43 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure &other_Cure);
		~Cure();
		Cure		&operator=(const Cure &other_Cure);
		AMateria	*clone() const;
		void		use(ICharacter& target);
};

#endif