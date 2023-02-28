/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:33 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 20:17:31 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with weapon " << _weapon.getType() << std::endl;
}

HumanB::HumanB(std::string name, Weapon weapon) : (_name(name), _weapon(weapon))
{
}

HumanB::~HumanB()
{
}