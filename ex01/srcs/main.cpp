/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:48:43 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 20:39:47 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	Animal	*Dog_and_Cats[10];
	int		i_;

	i_ = 0;
	while (i_ < 5)
		Dog_and_Cats[i_++] = new Dog();
	while (i_ < 10)
		Dog_and_Cats[i_++] = new Cat();
	i_ = 0;
	while (i_ < 10)
		Dog_and_Cats[i_++]->makeSound();
	i_ = 0;
	while (i_ < 10)
		delete Dog_and_Cats[i_++];
	std::cout << "####" << std::endl;
	Cat	Cat_;
	std::cout << "####" << std::endl;
	Cat_.specific_thought("Yipee", 10);
	Cat_.tell_specific_thought(10);
	std::cout << "####" << std::endl;
	Cat_.tell_ideas();

	Dog	Dog_;
	std::cout << "####" << std::endl;
	Dog_.specific_thought("Yipee", 10);
	Dog_.tell_specific_thought(12);
	std::cout << "####" << std::endl;
	Dog_.tell_ideas();
	std::cout << "####TEST FOR DEEP COPY####" << std::endl;
	Dog *basic = new Dog();
	basic->specific_thought("Yipee", 10);
	Dog *tmp = new Dog();
	*tmp = *basic;
	tmp->tell_specific_thought(10);
	delete tmp;
	delete basic;
}