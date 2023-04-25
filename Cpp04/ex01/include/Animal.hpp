/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:02 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/25 13:17:09 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"


class Animal
{
	protected:
		std::string	type;
		std::string	name;

	public:
		Animal();
		Animal(const std::string &name);
		Animal(const Animal &copy);
		virtual ~Animal();
		
		Animal &operator=(const Animal &rhs);
		virtual void	printClass() const;
		virtual void	makeSound() const; //virtual will force the son's function to be called

	private:
		
};

#endif