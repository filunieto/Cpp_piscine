/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:43 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 17:23:51 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "../include/HumanA.hpp"

// void HumanA::attack() const
// {
// 	if (this->_weapon) >>> nos da error porque (this->_weapon) == clase, y no puede usarse en un if (como si fuera un entero, bool , string,...)
// 		std::cout << this->_name << " attacks with their  " << _weapon.getType() << std::endl;
// 	else
// 		std::cout << this->_name << " has no weapon " << std::endl;
// }

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with his   " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name (name), _weapon(weapon) 
{
	
}

HumanA::~HumanA()
{
}


