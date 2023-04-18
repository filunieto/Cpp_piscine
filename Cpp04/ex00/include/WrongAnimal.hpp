/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:27:57 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/18 19:54:40 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
		std::string	name;

	public:
		WrongAnimal();
		WrongAnimal(const std::string &name);
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal();
		
		WrongAnimal &operator=(const WrongAnimal &rhs);
		void	printClass();
		void	makeSound();

	private:
		
};

#endif