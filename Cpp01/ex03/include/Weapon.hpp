/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:02:46 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 22:53:38 by fnieves-         ###   ########.fr       */
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
	void setType (std::string const &  typeWeapon); //por qué no (std::string typeWeapon). Lo dice en main (qué ventajas tine esto?)
	std::string const & getType() const; //aquí me dan const al final. Por qué?
};


#endif /* __WEAPON_HPP__ */