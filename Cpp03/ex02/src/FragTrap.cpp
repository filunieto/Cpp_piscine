/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:02:51 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/16 20:41:43 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_pointsHit = 100;
	this->_pointsEnergy = 100; 
	this->_pointsAttack = 30;
	std::cout << "Constructor default FragTrap called with NO name\n";
	return;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_Name = name;
	this->_pointsHit = 100;
	this->_pointsEnergy = 100; 
	this->_pointsAttack = 30;
	std::cout << "Constructor default FragTrap called whose name is " << this->_Name << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Constructor copy FragTrap called whose name is " << this->_Name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor default FragTrap called with  name: " << this->_Name << std::endl; ;
}

FragTrap & FragTrap::operator=(const FragTrap &rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "overload operator (=) FragTrap called whose name is " << this->_Name << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Here: " << this->_Name << " ,Wasapppppp!!??: " << std::endl; ;

}
