/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:38:14 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 20:18:00 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

void	Weapon::setType (std::string typeWeapon const)
{
	this->_type = typeWeapon;
	std::cout << "weapon set to: " << this->_type << std::endl;
}

// void	Weapon::setType (std::string typeWeapon const) ¿podríamos?
// {
// 	this->_type = typeWeapon;
// }

std::string const & Weapon::getType(void) const //por qué const?
{
	return (this->_type);
	// o return (_type);
}

Weapon::Weapon(std::string typeWeapon) : _type(typeWeapon)
{
}

Weapon::~Weapon()
{
}