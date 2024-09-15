/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:09:56 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 10:16:56 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &other_WrongAnimal);
		~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal &other_WrongAnimal);
		std::string		getType(void) const;
		void			makeSound(void) const;
	protected:
		std::string type;
};

#endif