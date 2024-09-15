/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:17:15 by eandre            #+#    #+#             */
/*   Updated: 2024/09/13 10:24:11 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const std::string &type);
		WrongCat(const WrongCat &other_WrongCat);
		~WrongCat();
		void		makeSound(void) const;
		WrongCat	&operator=(const WrongCat &other_Cat);
};

#endif