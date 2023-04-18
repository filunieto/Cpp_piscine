/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:02 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/18 19:23:34 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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
		void	printClass();
		virtual void	makeSound();

	private:
		
};

#endif