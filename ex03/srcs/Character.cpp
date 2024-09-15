/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:40:54 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 21:53:08 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : name("Default Character")
{
	int	i;

	i = 0;
	while (i < 4)
		this->inventory[i++] = NULL;
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const std::string &_name) : name(_name)
{
	int	i;

	i = 0;
	while (i < 4)
		this->inventory[i++] = NULL;
	std::cout << "Character constructor called of name " << this->name << std::endl;
}

Character::Character(const Character &other_Character)
{
	*this = other_Character;
	std::cout << "Copy Character constructor called of name " << this->name << std::endl;
}

Character	&Character::operator=(const Character &other_Character)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (other_Character.inventory[i])
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
			this->inventory[i] = other_Character.inventory[i]->clone();
		}
		else
			this->inventory[i] = NULL;
	}
	this->name = other_Character.name;
	std::cout << "Character Copy assignment operator called" << std::endl;
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (name);
}

Character::~Character()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		i++;
	}
	std::cout << "Destructor called for Character " << this->name << std::endl;
}

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m->clone();
			std::cout << "New item added to inventory of " << this->name << ": " << m->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "No space left in the inventory of " << this->name << std::endl;
		
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	if(this->inventory[idx])
	{
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;
	if(this->inventory[idx])
		this->inventory[idx]->use(target);
}
