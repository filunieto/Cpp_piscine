/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:13 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/25 13:24:11 by fnieves          ###   ########.fr       */
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

void	Dog::printClass() const
{
	std::cout  << " Print function Dog animal :  " << std::endl;
	std::cout  << this->type << " type    " << std::endl;
	std::cout  << this->name << " name   " << std::endl;
	std::cout  << this->_brain->getBrain() << " name Brain   " << std::endl;
	for (int i = 0; i < MAX_IDEA; i++)
	{
		if (this->_brain->getIdea(i) != 0)
			std::cout  << this->_brain->getIdea(i) << " idea " << i << std::endl;
	}
	std::cout  << " *******************  " << std::endl;
}