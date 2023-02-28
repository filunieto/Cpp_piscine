/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:48 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/20 11:16:30 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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

}

Zombie::~Zombie()
{
	std::cout << this->_name << ": was destroyed " << std::endl;

}