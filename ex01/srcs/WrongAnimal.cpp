/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:15:59 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 10:20:13 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &_type)
{
	type = _type;
	std::cout << "WrongAnimal constructor called for " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other_WrongAnimal)
{
	*this = other_WrongAnimal;
	std::cout << "Copy WrongAnimal constructor called for " << this->type << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other_WrongAnimal)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	this->type = other_WrongAnimal.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Hello i can't make a sound because i'm to basic but i'm WRONG" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called for WrongAnimal " << this->type << std::endl;
}