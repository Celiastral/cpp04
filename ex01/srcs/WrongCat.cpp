/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:18:15 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 10:19:21 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &_type) : WrongAnimal()
{
	type = _type;
	std::cout << "WrongCat constructor called for " << this->type << std::endl;
}

WrongCat::WrongCat(const WrongCat &other_WrongCat) : WrongAnimal()
{
	*this = other_WrongCat;
	std::cout << "WrongCat copy constructor called for " << this->type << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow Meow but i'm WRONG" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other_WrongCat)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = other_WrongCat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called for WrongCat " << this->type << std::endl;
}