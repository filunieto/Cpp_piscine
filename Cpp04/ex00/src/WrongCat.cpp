/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:27:54 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/20 13:28:33 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()  //prueba a quitar esto WrongAnimal() 
{
	this->type = "WrongCat";
	std::cout << "Constructor default WrongCat , no parameter name." << std::endl;
}

WrongCat::WrongCat(const std::string &name)  : WrongAnimal(name)
{
	std::cout << "Constructor default WrongCat , with parameter name." << std::endl;	
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal (copy)
{
	std::cout << "Constructor copy WrongCat: " << this->type << std::endl;	
}

WrongCat::~WrongCat()
{
	std::cout << "Desstructor default WrongCat." << std::endl;	

}

WrongCat & WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "assigment operator called WrongCat: " << this->type << std::endl;
	this->name = rhs.name;
	return (*this);
}



void WrongCat::makeSound() const
{
	std::cout << "wrongCat meow meow meow!!!" << std::endl;
}