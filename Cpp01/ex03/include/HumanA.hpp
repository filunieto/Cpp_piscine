/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:43 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/27 15:40:26 by fnieves          ###   ########.fr       */
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
	Weapon(); // a qué funcion se llama para tener una weapon, al constructor?
	// Weapon::setType (std::string typeWeapon)
	
public:
	HumanA(/* args */);
	~HumanA();
	void attack(void); //si le he dado una clase como input
};

HumanA::HumanA(/* args */)
{
}

HumanA::~HumanA()
{
}


#endif