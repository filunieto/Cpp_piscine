/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:56 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/21 00:55:11 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"
#include "include/Brain.hpp"

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

	
	std::cout << "*****Dog class***** " << std::endl;
	//const Dog *dog1 = new Animal("dog1_animal"); Error
	const Animal *dog2 = new Dog("Animal_dog2");
	const Dog *dog3 = new Dog("dog_dog3");
	dog3->printClass();
	dog3->makeSound();
	dog2->printClass();
	dog2->makeSound();
	const Animal *dog4 = new Dog();
	const Dog *dog5 = new Dog();
	dog4->printClass();
	dog4->makeSound();
	dog5->printClass();
	dog5->makeSound();

	std::cout << "*****We try to copy animal into Dog and viceversa***** " << std::endl;
	const Animal *animal10(dog3);
	animal10->printClass();
	animal10->makeSound();

	//const Dog *Dog10(animal1); // Error
	std::cout << std::endl << " WrongAnimal basic class example" << std::endl;
	const WrongAnimal * wronganimal1 = new WrongAnimal();
	wronganimal1->makeSound();
	wronganimal1->printClass();
	delete wronganimal1;

	std::cout << std::endl << "WronCat basic class example inherits from WrongAnimal class" << std::endl;
	const WrongAnimal * cat = new WrongCat();
	cat->makeSound();
	cat->printClass();
	delete cat;


	std::cout << "*****Test finished, we delete***** " << std::endl;
	delete animal1;
	delete dog2;
	delete dog3;
	delete dog4;
	delete dog5;


	// {
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	i->makeSound(); //will output the cat sound!
	// 	j->makeSound();
	// 	meta->makeSound();
	// }
	//atexit(check_leaks);
	return 0;
}

