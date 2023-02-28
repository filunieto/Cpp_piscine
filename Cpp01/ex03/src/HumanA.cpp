/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:43 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 14:45:17 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "HumanA.hpp"


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


