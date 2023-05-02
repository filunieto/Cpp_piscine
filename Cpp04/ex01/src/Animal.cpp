/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:08 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/02 12:40:07 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : type("Animal_type"), name("Animal default name")
{
	std::cout << "Constructor default Animal , No parameter name:  " << this->name << std::endl;
}

Animal::Animal(const std::string &name)
{
	this->name = name;
	std::cout << "Constructor default Animal with name :  " << this->name << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->name = copy.name;
	std::cout << "Constructor copy Animal , name:  " << this->name << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor default Animal , name:  " << this->name << std::endl;
}

Animal & Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;
	this->name = rhs.name;
	std::cout  << this->name << " animal operator designation :  " << std::endl;
	return (*this);
}
		
void	Animal::makeSound() const
{
	std::cout  << this->name << " , animal makes a sound whatever  " << std::endl;

}

void	Animal::printClass() const
{
	std::cout  << " Print function animal :  " << std::endl;
	std::cout  << this->type << " type    " << std::endl;
	std::cout  << this->name << " name   " << std::endl;
	std::cout  << " *******************  " << std::endl;
}