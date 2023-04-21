/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:11 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/19 22:08:06 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()  //prueba a quitar esto Animal() 
{
	this->type = "Cat";
	std::cout << "Constructor default Cat , no parameter name." << std::endl;
}

Cat::Cat(const std::string &name)  : Animal(name)
{
	std::cout << "Constructor default Cat , with parameter name." << std::endl;	
}

Cat::Cat(const Cat &copy) : Animal (copy)
{
	std::cout << "Constructor copy Cat: " << this->type << std::endl;	
}

Cat::~Cat()
{
	std::cout << "Desstructor default Cat." << std::endl;	

}

Cat & Cat::operator=(const Cat &rhs)
{
	std::cout << "assigment operator called Cat: " << this->type << std::endl;
	this->name = rhs.name;
	return (*this);
}



void Cat::makeSound() const
{
	std::cout << "meow meow meow!!!" << std::endl;
}