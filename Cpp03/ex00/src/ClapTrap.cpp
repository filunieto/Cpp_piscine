/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:30:42 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/15 15:23:46 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

unsigned int ClapTrap::_pointsHit = 10;
unsigned int ClapTrap::_pointsEnergy = 10;
unsigned int ClapTrap::_pointsAttack = 0;

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
	*this = copy;
	std::cout << "Constructor copy ClapTrap called . Name of the copy: " << copy._Name 
	<< " , and name of class created (should be the same): " << this->_Name << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Operator asignation ClapTrap from Instance: " << src._Name << std::endl;
	this->_Name = src._Name;
	this->_pointsHit = src._pointsHit;
	this->_pointsEnergy = src._pointsEnergy;
	this->_pointsAttack = src._pointsAttack;
	//std::cout << "Operator asignation ClapTrap from Instance: " << src._Name << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_pointsEnergy >= 1)
	{
		std::cout << "attack ClapTrap: " << this->_Name << " to " << target << std::endl;
		this->_pointsEnergy -= 1;
	}
	else
		std::cout << "No energy to attack ClapTrap " << this->_Name << " to " << target << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << " takeDamage ClapTrap: "  << this->_Name << std::endl;
	if (this->_pointsHit > amount)
		this->_pointsHit -= amount;
	else
		this->_pointsHit = 0;
		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_pointsEnergy >= 1)
	{
		std::cout << "beRepaired ClapTrap: " << this->_Name << std::endl;
		this->_pointsEnergy -= 1;
		this->_pointsHit += amount;
	}
	else
		std::cout << "No energy enough to beRepaired ClapTrap " << this->_Name << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->_Name);
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
