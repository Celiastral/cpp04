/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:36:21 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 11:27:56 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
		Brain();
		Brain(const Brain &other_Brain);
		~Brain();
		void	think(const std::string idea);
		void	specific_thought(const std::string idea, const unsigned int idea_index);
		void	tell_ideas(void);
		void	tell_specific_thought(const unsigned int idea_index);
		Brain	&operator=(const Brain &other_Brain);
	private :
		std::string ideas[100];
};

#endif