/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:46:27 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 18:33:06 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() : type("Default AMateria")
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string &_type)
{
	type = _type;
	std::cout << "AMateria constructor called of type " << this->type << std::endl;
}

AMateria::AMateria(const AMateria &other_AMateria)
{
	*this = other_AMateria;
	std::cout << "Copy AMateria constructor called of type " << this->type << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &other_AMateria)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	this->type = other_AMateria.type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "This is a virtual class and the name of my target is "  << target.getName()<< std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destructor called for AMateria of type " << this->type << std::endl;
}