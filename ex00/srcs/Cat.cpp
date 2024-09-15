/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:03:33 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 20:13:22 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other_Cat) : Animal()
{
	*this = other_Cat;
	std::cout << "Cat copy constructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

Cat	&Cat::operator=(const Cat &other_Cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other_Cat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor called for Cat" << std::endl;
}