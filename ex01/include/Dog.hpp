/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:46:42 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 11:20:49 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public :
		Dog();
		Dog(const Dog &other_Dog);
		~Dog();
		void	think(const std::string idea);
		void	specific_thought(const std::string idea, const unsigned int idea_index);
		void	tell_ideas(void);
		void	tell_specific_thought(const unsigned int idea_index);
		void	makeSound(void) const;
		Dog		&operator=(const Dog &other_Dog);
	private :
		Brain	*Brain_;
};

#endif