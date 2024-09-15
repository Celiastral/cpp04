/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:18:15 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 20:14:31 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other_WrongCat) : WrongAnimal()
{
	*this = other_WrongCat;
	std::cout << "WrongCat copy constructor called" << std::endl;
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
	std::cout << "Destructor called for WrongCat" << std::endl;
}