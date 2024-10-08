/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:49:18 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 20:43:56 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &other_Animal);
		virtual ~Animal();
		Animal			&operator=(const Animal &other_Animal);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
	protected:
		std::string type;
};

#endif