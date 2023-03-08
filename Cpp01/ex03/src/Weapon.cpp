/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:38:14 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 16:41:44 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

void	Weapon::setType (std::string const & typeWeapon)
{
	this->_type = typeWeapon;
	std::cout << "weapon set to: " << this->_type << std::endl;
}

/**
 * @brief 
 * 	Const is used for:
	1. indicate that the function getType() does not modify the state of the object on which it is called.
	This means that the function is a "read-only" function and does not change the object's internal data.
	By using const, we are telling the compiler that this function will not modify the object,
	which allows the compiler to optimize code and helps prevent accidental modifications of the object's state.

	2. It also indicates that the return value of the function is a constant reference to a std::string object.
	This means that the caller of the function cannot modify the returned value.
 * @return std::string const& 
 */


std::string const & Weapon::getType(void) const
{
	return (this->_type);
}

Weapon::Weapon(std::string typeWeapon) : _type(typeWeapon)
{
	std::cout << " called constrcutor weapon:  " << _type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "called destructor weapon  " << _type << std::endl;
}