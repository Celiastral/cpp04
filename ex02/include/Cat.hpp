/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:02:36 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 12:01:21 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	public:
		Cat();
		Cat(const Cat &other_Cat);
		~Cat();
		void	think(const std::string idea);
		void	specific_thought(const std::string idea, const unsigned int idea_index);
		void	tell_ideas(void);
		void	tell_specific_thought(const unsigned int idea_index);
		void	makeSound(void) const;
		Cat		&operator=(const Cat &other_Cat);
	private :
		Brain	*Brain_;
};

#endif