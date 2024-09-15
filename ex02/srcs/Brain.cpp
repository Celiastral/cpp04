/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:40:39 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 11:33:00 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	this->think("Hi i'm a empty brain idea");
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other_Brain)
{
	*this = other_Brain;
	std::cout << "Copy Brain constructor called" << std::endl;
}

void	Brain::tell_ideas(void)
{
	int	i;

	i = -1;
	while (++i < 100)
		std::cout << ideas[i] << std::endl;
}

void	Brain::think(std::string idea)
{
	int	i;

	i = -1;
	while (++i < 100)
		ideas[i] = idea;
}

void	Brain::specific_thought(std::string idea, unsigned int index)
{
	if (index > 100)
		return ;
	ideas[index] = idea;
}

void	Brain::tell_specific_thought(unsigned int index)
{
	if (index > 100)
		return ;
	std::cout << ideas[index] << std::endl;
}

Brain	&Brain::operator=(const Brain &other_Brain)
{
	int	i;

	std::cout << "Brain Copy assignment operator called" << std::endl;
	i = -1;
	while (++i < 100)
		ideas[i] = other_Brain.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
}