/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:53:44 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 10:08:09 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &_type)
{
	type = _type;
	std::cout << "Animal constructor called for " << this->type << std::endl;
}

Animal::Animal(const Animal &other_Animal)
{
	*this = other_Animal;
	std::cout << "Copy Animal constructor called for " << this->type << std::endl;
}

Animal	&Animal::operator=(const Animal &other_Animal)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = other_Animal.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Hello i can't make a sound because i'm to basic" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}

Animal::~Animal()
{
	std::cout << "Destructor called for Animal " << this->type << std::endl;
}