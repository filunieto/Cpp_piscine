/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:30:42 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/15 14:41:27 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name)
{
	std::cout << "Constructor default ClapTrap called whose name is " << this->_Name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor default ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Constructor copy ClapTrap called" << std::endl;
	*this = copy;
}



ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Operator asignation ClapTrap" << std::endl;
	this->_Name = src._Name;
	this->_pointsHit = src._pointsHit;
	this->_pointsEnergy = src._pointsEnergy;
	this->_pointsAttack = src._pointsAttack;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_pointsEnergy >= 1)
	{
		std::cout << "attack ClapTrap " << this->_Name << "to " << target << std::endl;
		this->_pointsEnergy -= 1;
	}
	else
		std::cout << "No energy to attack ClapTrap " << this->_Name << " to " << target << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << " takeDamage ClapTrap "  << this->_Name << std::endl;
	if (this->_pointsHit > (int)amount)
		this->_pointsHit -= (int)amount;
	else
		this->_pointsHit = 0;
		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_pointsEnergy >= 1)
	{
		std::cout << "beRepaired ClapTrap" << this->_Name << std::endl;
		this->_pointsEnergy -= 1;
		this->_pointsHit += amount;
	}
	else
		std::cout << "No energy enough to beRepaired ClapTrap " << this->_Name << std::endl;

}












// {
// private:
// 	/* data */
// public:
// 	ClapTrap(/* args */);
// 	~ClapTrap();
// };

// ClapTrap::ClapTrap(/* args */)
// {
// }

// ClapTrap::~ClapTrap()
// {
// }
