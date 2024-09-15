/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:03:33 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 20:46:45 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
	Brain_ = new Brain;
}

Cat::Cat(const Cat &other_Cat) : AAnimal()
{
	*this = other_Cat;
	std::cout << "Cat copy constructor called " << std::endl;
}

void	Cat::tell_ideas(void)
{
	this->Brain_->tell_ideas();
}

void	Cat::think(std::string idea)
{
	this->Brain_->think(idea);
}

void	Cat::specific_thought(std::string idea, unsigned int index)
{
	this->Brain_->specific_thought(idea, index);
}

void	Cat::tell_specific_thought(unsigned int index)
{
	this->Brain_->tell_specific_thought(index);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

Cat	&Cat::operator=(const Cat &other_Cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other_Cat.type;
	if (Brain_ != NULL)
		delete Brain_;
	this->Brain_ = new Brain(*other_Cat.Brain_);
	return (*this);
}

Cat::~Cat()
{
	delete this->Brain_;
	std::cout << "Destructor called for Cat" << std::endl;
}