/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:33 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 15:52:20 by fnieves-         ###   ########.fr       */
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
	Weapon* _weapon;
	
public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &weapon);
};



#endif