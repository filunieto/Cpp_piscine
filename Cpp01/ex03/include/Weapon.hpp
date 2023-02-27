/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:02:46 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/27 14:59:30 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__
#include <iostream>
#include "Weapon.hpp"


class Weapon
{
private:
	std::string _type;

public:
	Weapon(/* args */);
	~Weapon();
	void setType (std::string typeWeapon const);
	std::string const & getType(void);
};

// Weapon::Weapon()
// {
// }

// Weapon::~Weapon()
// {
// }


#endif /* __WEAPON_HPP__ */