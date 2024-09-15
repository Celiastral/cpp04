/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:49:18 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 12:00:03 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &other_AAnimal);
		virtual ~AAnimal();
		AAnimal			&operator=(const AAnimal &other_AAnimal);
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string type;
};

#endif