/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:43 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 14:45:28 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HUMAN_A_HPP__
#define __HUMAN_A_HPP__
#include <iostream>
#include "Weapon.hpp"



class HumanA  //como parametro , tendría una class weapon? o un string
{
private:
	std::string _name;
	Weapon& _weapon; // a qué funcion se llama para tener una weapon, al constructor?
	// >>> por qué no ? Weapon weapon;
	// Weapon::setType (std::string typeWeapon)
	
public:
	HumanA(/* args */);
	~HumanA();
	void attack(void) const; //si le he dado una clase como input
};




#endif