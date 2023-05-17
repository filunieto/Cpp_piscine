/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:56 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/02 14:15:05 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/Brain.hpp"

#include <stdlib.h>


/*
	atexit(check_leaks);
*/
void	check_leaks(void)
{
	system("leaks Polymorphism");
}

#define MAXANIMALS 4

int main()
{
	std::cout << "1). Example with animal array" << std::endl;
	Animal *animals[MAXANIMALS];

	int i = 0;
	for(;i < (MAXANIMALS / 2); i++)
	{
		animals[i] = new Dog();
		std::cout << "Dog #" << i << " created " << std::endl;
		for(int j = 0; j < MAX_IDEA; j++)
		{
			
            Dog *ptr_dog = dynamic_cast<Dog*>(animals[i]);
            if (ptr_dog)
                ptr_dog->setIdea((unsigned int)j, j + 1);
			//((Dog *) (animals[i]))->setIdea((unsigned int)j, j + 1);
			//std::cout << "--- " << "Type: " << animals[i]->getType() <<  ((Dog *) (animals[i]))->getIdea((unsigned int) j) << j << std::endl;
		}
	}
	for(;i < MAXANIMALS; i++)
	{
		animals[i] = new Cat();
		std::cout << "Cat #" << i << " created " << std::endl;
		for(int j = 0; j < MAX_IDEA; j++)
		{
			Cat *ptr_cat = dynamic_cast<Cat*>(animals[i]);
			if (ptr_cat)
				ptr_cat->setIdea((unsigned int)j, j + 1);
			// ((Cat *) (animals[i]))->setIdea((unsigned int)j, j + 1);
		}
	}
	for(i = 0;i < MAXANIMALS; i++)
		animals[i]->makeSound();
	// for(i = 0;i < MAXANIMALS; i++)
	// 	animals[i]->printClass();


	std::cout << std::endl << "1). Example with Copy-dog" << std::endl;
	//animals[0]->printClass();
	//animals[2]->printClass(); //cat
	std::cout << std::endl << "2). After print animals[0]->printClass() ." << std::endl;
	Animal *cat1 = new Cat(*(Cat *)animals[2] );
	Animal *dog1 = new Dog(*(Dog *)animals[0]); //el consytructor por copia la está liando
	cat1->printClass();
	std::cout << std::endl << "3). cat1->printClass(); ." << std::endl;
	dog1->printClass();
	std::cout << std::endl << "4). dog1->printClass();." << std::endl;

	std::cout << std::endl << "5). Example: dog and copy-dog have the SAME ideas:" << std::endl;
	std::cout << " Dog idea: " << ((Dog *)animals[0])->getIdea(0) << "		Copy-dog (dog1) idea: " << ((Dog *)dog1)->getIdea(0) << std::endl;
	std::cout << " Dog idea: " << ((Dog *)animals[0])->getIdea(1) << "		Copy-dog (dog1) idea: " << ((Dog *)dog1)->getIdea(1) << std::endl;
	std::cout << " Dog idea: " << ((Dog *)animals[0])->getIdea(2) << "		Copy-dog (dog1) idea: " << ((Dog *)dog1)->getIdea(2) << std::endl;

	std::cout << std::endl << "6). Example: dog and copy-dog have the DIFFERENT ideas:" << std::endl;
	((Dog *)dog1)->setIdea(0, 1);
	((Dog *)dog1)->setIdea(1, 2);
	((Dog *)dog1)->setIdea(2, 3);
	std::cout << " Dog idea: " << ((Dog *)animals[0])->getIdea(0) << "		Copy-dog (dog1) idea: " << ((Dog *)dog1)->getIdea(0) << std::endl;
	std::cout << " Dog idea: " << ((Dog *)animals[0])->getIdea(1) << "		Copy-dog (dog1) idea: " << ((Dog *)dog1)->getIdea(1) << std::endl;
	std::cout << " Dog idea: " << ((Dog *)animals[0])->getIdea(2) << "		Copy-dog (dog1) idea: " << ((Dog *)dog1)->getIdea(2) << std::endl;

	std::cout << std::endl << "7). Delete Examples" << std::endl;
	delete dog1;
	delete cat1;
	while (--i >= 0)
		delete (animals[i]);
	check_leaks();
	return 0;
}
