/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:56 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/19 22:45:00 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include <stdlib.h>


/*
	atexit(check_leaks);
*/
void	check_leaks(void)
{
	system("leaks Polymorphism");
}

int main ()
{
	std::cout << "Animal class " << std::endl;
	const Animal *animal1 = new Animal();
	animal1->printClass();
	animal1->makeSound();
	delete animal1;
	
	std::cout << "*****Dog class***** " << std::endl;

	//atexit(check_leaks);
	return 0;
}

