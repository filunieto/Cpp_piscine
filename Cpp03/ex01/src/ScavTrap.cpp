/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:04:51 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/16 19:27:01 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

//hacer los constructoirers con la herencia

ScavTrap::ScavTrap() : ClapTrap()  
{
	this->_pointsHit = 100;
	this->_pointsEnergy = 50;
	this->_pointsAttack = 20;
	this->_guardModus = false;
	std::cout << "Constructor default ScavTrap called with NO name\n";
	return;
}


ScavTrap::ScavTrap(const std::string &name) : ClapTrap (name)
{
	this->_Name = name;
	this->_pointsHit = 100;
	this->_pointsEnergy = 50;
	this->_pointsAttack = 20;
	this->_guardModus = false;
	std::cout << "Constructor default ScavTrap called with  Name as parameter: " << this->_Name << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor default ScavTrap called with his Name: " << this->_Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) :ClapTrap(copy)
{
	// *this = copy;
	this->_guardModus = copy._guardModus;
	std::cout << "Constructor copy ScavTrap called with his Name: " << this->_Name << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "Overload asignation operator ScavTrap from " << this->_Name << std::endl;
	return(*this);
}

void	ScavTrap::attack(const std::string &name)
{
	if (this->_pointsEnergy >= 1)
	{
		std::cout << this->_Name << " ScavTrap is attacking to: "  << name << " with points atttack " << this->_pointsAttack << std::endl;
		this->_pointsEnergy--;
	}
	else
		std::cout << this->_Name << " ScavTrap has no energy to attack to " << name << std::endl;
}


void	ScavTrap::guardGate()
{
	if (_guardModus)
	{
		this->_guardModus = false;
		std::cout << this->_Name << " ScavTrap mode guardGate OFF " << std::endl;
	}
	else
	{
		this->_guardModus= true;
		std::cout << this->_Name << " ScavTrap mode guardGate ON " << std::endl;
	}
}

void ScavTrap::printScavTrap()
{
	std::cout <<  "\n**************\n"
	<< "Properties from class ScavTrap: " << this->_Name
	<<  "\nEnergy: " << this->_pointsEnergy
	<<  "\nHitPoints: " << this->_pointsHit
	<<  "\nAtack: " << this->_pointsAttack;
	if (this->_guardModus)
		std::cout << "\nGuard Modus ON";
	else
		std::cout << "\nGuard Modus OFF";
	std::cout << "\n**************\n " << std::endl;
}