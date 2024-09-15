/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:46:38 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 20:13:06 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other_Dog) : Animal()
{
	*this = other_Dog;
	std::cout << "Dog copy constructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark" << std::endl;
}

Dog	&Dog::operator=(const Dog &other_Dog)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other_Dog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor called for Dog " << std::endl;
}