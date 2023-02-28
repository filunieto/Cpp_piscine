/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:43 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 20:17:03 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "../include/HumanA.hpp"


void attack() const
{
	std::cout << this->_name << " attacks with their  " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : (_type (name), _weapon(weapon) )
{
}

HumanA::~HumanA()
{
}


