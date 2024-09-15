/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:24:52 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 17:39:05 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &other_Ice) : AMateria(other_Ice.type)
{
	*this = other_Ice;
	std::cout << "Copy Ice constructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &other_Ice)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	this->type = other_Ice.type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Destructor called for Ice" << std::endl;
}

AMateria	*Ice::clone() const
{
	std::cout << "Ice Clone called" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}