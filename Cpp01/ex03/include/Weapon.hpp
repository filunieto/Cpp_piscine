/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:02:46 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 13:49:35 by fnieves-         ###   ########.fr       */
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
	Weapon(std::string typeWeapon); 
	~Weapon();
	void setType (std::string const &  typeWeapon);

	std::string const & getType() const;
};

#endif /* __WEAPON_HPP__ */