/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:13 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/20 13:01:05 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()  //prueba a quitar esto Animal() 
{
	this->type = "Dog";
	std::cout << "Constructor default Dog , no parameter name." << std::endl;
}

Dog::Dog(const std::string &name)  : Animal(name)
{
	std::cout << "Constructor default Dog , with parameter name." << std::endl;	
}

Dog::Dog(const Dog &copy) : Animal (copy)
{
	std::cout << "Constructor copy Dog: " << this->type << std::endl;	
}

Dog::~Dog()
{
	std::cout << "Destructor default Dog." << std::endl;	

}

Dog & Dog::operator=(const Dog &rhs)
{
	std::cout << "assigment operator called Dog: " << this->type << std::endl;
	this->name = rhs.name;
	return (*this);
}



void Dog::makeSound() const
{
	std::cout << "gua gua guau!!!" << std::endl;
}