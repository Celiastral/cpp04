/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:04:58 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 21:53:39 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Character.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("fire");
	if (tmp != NULL)
		me->equip(tmp);
	else
		std::cout << "The fire materia doesnt exist!" << std::endl;
	ICharacter* bob = new Character("bob");
	me->unequip(4);
	me->unequip(3);
	me->unequip(2);
	me->unequip(-1);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(-1, *bob);
	me->use(500, *bob);
	delete bob;
	delete me;
	delete src;
}