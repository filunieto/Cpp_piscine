/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:13 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/02 14:11:12 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()) //prueba a quitar esto Animal() 
{
	this->type = "Dog";
	_brain->setBrain("brain dog default");
	std::cout << "Constructor default Dog , no parameter name." << std::endl;
}

Dog::Dog(const std::string &name)  : Animal(name), _brain(new Brain())
{
	type = "Dog";
	_brain->setBrain("brain dog default");
	std::cout << "Constructor default Dog , with parameter name." << std::endl;	
}

Dog::Dog(const Dog &copy) : Animal (copy), _brain(new Brain(*copy._brain))
{
	std::cout << "Constructor copy Dog: " << this->type << std::endl;	
}

Dog::~Dog()
{
	delete _brain;
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

void	Dog::setIdea(unsigned int indexIdea, const unsigned int idea)
{
	_brain->setIdea(indexIdea, idea);
}

const unsigned int & Dog::getIdea(unsigned int indexIdea) const
{
	return (_brain->getIdea(indexIdea));
}