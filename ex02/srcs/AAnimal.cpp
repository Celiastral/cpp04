/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:53:44 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 12:00:16 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "AAnimal";
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &_type)
{
	type = _type;
	std::cout << "AAnimal constructor called for " << this->type << std::endl;
}

AAnimal::AAnimal(const AAnimal &other_AAnimal)
{
	*this = other_AAnimal;
	std::cout << "Copy AAnimal constructor called for " << this->type << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &other_AAnimal)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	this->type = other_AAnimal.type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Hello i can't make a sound because i'm to basic" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (type);
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor called for AAnimal " << this->type << std::endl;
}