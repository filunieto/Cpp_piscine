/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:38:14 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 23:38:45 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

void	Weapon::setType (std::string const & typeWeapon)
{
	this->_type = typeWeapon;
	std::cout << "weapon set to: " << this->_type << std::endl;
}



std::string const & Weapon::getType(void) const //por qué const?
{
	return (this->_type);
}

Weapon::Weapon(std::string typeWeapon) : _type(typeWeapon)
{
}

Weapon::~Weapon()
{
}