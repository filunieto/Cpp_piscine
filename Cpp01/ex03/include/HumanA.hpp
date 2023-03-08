/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:39:43 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 13:37:46 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HUMAN_A_HPP__
#define __HUMAN_A_HPP__
#include <iostream>
#include "Weapon.hpp"



class HumanA 
{
private:
	std::string _name;
	Weapon& _weapon; 

	
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack(void) const;
};




#endif