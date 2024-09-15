/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:24:49 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 17:57:37 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other_Cure) : AMateria(other_Cure.type)
{
	*this = other_Cure;
	std::cout << "Copy Cure constructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &other_Cure)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	this->type = other_Cure.type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	std::cout << "Cure Clone called" << std::endl;
	return (new Cure());
}

Cure::~Cure()
{
	std::cout << "Destructor called for Cure" << std::endl;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<"'s wounds *"<< std::endl;
}