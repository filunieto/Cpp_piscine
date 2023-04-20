/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:27:51 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/20 13:26:11 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal_type"), name("WrongAnimal default name")
{
	std::cout << "Constructor default WrongAnimal , No parameter name:  " << this->name << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &name)
{
	this->name = name;
	std::cout << "Constructor default WrongAnimal with name :  " << this->name << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	this->name = copy.name;
	std::cout << "Constructor copy WrongAnimal , name:  " << this->name << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor default WrongAnimal , name:  " << this->name << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;
	this->name = rhs.name;
	std::cout  << this->name << " WrongAnimal operator designation :  " << std::endl;
	return (*this);
}
		
void	WrongAnimal::makeSound() const
{
	std::cout  << this->name << " , WrongAnimal makes a sound whatever  " << std::endl;

}

void	WrongAnimal::printClass() const
{
	std::cout  << " Print function WrongAnimal :  " << std::endl;
	std::cout  << this->type << " type    " << std::endl;
	std::cout  << this->name << " name   " << std::endl;
	std::cout  << " *******************  " << std::endl;
}