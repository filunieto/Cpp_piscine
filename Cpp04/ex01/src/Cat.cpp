/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:11 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/02 12:45:01 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal() , _brain(new Brain()) //prueba a quitar esto Animal() 
{
	this->type = "Cat";
	this->_brain->setBrain("brain cat default");  //this not needed
	std::cout << "Constructor default Cat , no parameter name." << std::endl;
}

Cat::Cat(const std::string &name)  : Animal(name), _brain(new Brain())
{
	//this->type = "Cat";
	type = "Cat";
	_brain->setBrain("brain cat construc1");
	std::cout << "Constructor default Cat , with parameter name." << std::endl;	
}

Cat::Cat(const Cat &copy) : Animal (copy), _brain(new Brain(*copy._brain))
{
	
	//_brain->setBrain(copy._brain->getBrain());
	std::cout << "Constructor copy Cat: " << this->type << std::endl;	
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Desstructor default Cat." << std::endl;	

}

Cat & Cat::operator=(const Cat &rhs)
{
	if (this == &rhs)
		return (*this);
	this->name = rhs.name;
	delete _brain;
	this->_brain = new Brain(*rhs._brain);
	std::cout << "assigment operator called Cat: " << this->type << std::endl;
	return (*this);
}



void Cat::makeSound() const
{
	std::cout << "meow meow meow!!!" << std::endl;
}



void	Cat::printClass() const
{
	std::cout  << " Print function Cat animal :  " << std::endl;
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

void	Cat::setIdea(unsigned int indexIdea, const unsigned int idea)
{
	_brain->setIdea(indexIdea, idea);
}

const unsigned int & Cat::getIdea(unsigned int indexIdea) const
{
	return (_brain->getIdea(indexIdea));
}

// 		Brain	*getBrain() const;
