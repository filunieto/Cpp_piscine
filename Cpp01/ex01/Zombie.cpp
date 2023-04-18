/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:48 by fnieves           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/20 11:16:30 by fnieves          ###   ########.fr       */
=======
/*   Updated: 2023/02/22 17:04:03 by fnieves          ###   ########.fr       */
>>>>>>> cpp02
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
// void Zombie::setName(std::string name)
// {
// 	this->_name = name;
// }

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << ": was created " << std::endl;

=======
void Zombie::announce(void) const
{
	//std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
	// or:
	// Zombie::name = name
	std::cout << "name: " << this->_name << ", was settle" << std::endl;
}


// Zombie::Zombie(std::string name)
// {

	// 1. another way to asignate the value.
	// Zombie::name = name

	// 2. another way to asignate the value. Only working for const.
	// Zombie::Zombie(std::string n): name(n)

	// or 3:
	// this->name = name;
// }

//inicializando la variable
Zombie::Zombie()
{
	std::cout <<  "1 zombie was created " << std::endl;
>>>>>>> cpp02
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": was destroyed " << std::endl;
<<<<<<< HEAD

=======
>>>>>>> cpp02
}