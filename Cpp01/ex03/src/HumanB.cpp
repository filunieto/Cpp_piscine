/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:33 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 22:43:39 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

void	HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with weapon " << _weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon " << std::endl;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::~HumanB()
{
}