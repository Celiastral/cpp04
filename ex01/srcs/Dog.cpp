/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:46:38 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 20:34:27 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	Brain_ = new Brain;
}

Dog::Dog(const Dog &other_Dog) : Animal()
{
	*this = other_Dog;
	std::cout << "Dog copy constructor called" << std::endl;
}

void	Dog::tell_ideas(void)
{
	this->Brain_->tell_ideas();
}

void	Dog::think(std::string idea)
{
	this->Brain_->think(idea);
}

void	Dog::specific_thought(std::string idea, unsigned int index)
{
	this->Brain_->specific_thought(idea, index);
}

void	Dog::tell_specific_thought(unsigned int index)
{
	this->Brain_->tell_specific_thought(index);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark" << std::endl;
}

Dog	&Dog::operator=(const Dog &other_Dog)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other_Dog.type;
	if (Brain_ != NULL)
		delete Brain_;
	this->Brain_ = new Brain(*other_Dog.Brain_);
	return (*this);
}

Dog::~Dog()
{
	delete this->Brain_;
	std::cout << "Destructor called for Dog" << std::endl;
}