/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:33 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 14:49:19 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __HUMAN_B_HPP__
#define __HUMAN_B_HPP__
#include <iostream>
#include "Weapon.hpp"


class HumanB
{
private:
	std::string _name;
	Weapon	_weapon;
	
public:
	HumanB();
	~HumanB();
	void attack() const;
};



#endif