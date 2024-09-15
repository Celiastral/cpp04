/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:24:58 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 21:28:09 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i;

	i = 0;
	while (i < 4)
		materia_Source_content[i++] = NULL;
	std::cout << "Default MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other_MateriaSource)
{
	*this = other_MateriaSource;
	std::cout << "Copy MateriaSource constructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other_MateriaSource)
{
	int	i;

	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	i = -1;
	while (++i < 4)
		materia_Source_content[i] = other_MateriaSource.materia_Source_content[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if(!this->materia_Source_content[i])
		{
			this->materia_Source_content[i] = materia;
			break;
		}
		i++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while(i < 4)
	{
		if (this->materia_Source_content[i] && this->materia_Source_content[i]->getType() == type)
			return(this->materia_Source_content[i]);
		i++;
	}
	return(NULL);
}

MateriaSource::~MateriaSource()
{
	int	i;

	std::cout << "Destructor called for MateriaSource" << std::endl;
	i = 0;
	while (i < 4)
	{
		if (materia_Source_content[i])
			delete materia_Source_content[i];
		i++;
	}
}