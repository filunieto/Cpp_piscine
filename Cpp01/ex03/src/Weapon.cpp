/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:38:14 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/27 14:35:05 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	setType (std::string typeWeapon const)
{
	this->_type = typeWeapon;
}

std::string const & getType(void)
{
	return ((std::string const) this->_type);
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}