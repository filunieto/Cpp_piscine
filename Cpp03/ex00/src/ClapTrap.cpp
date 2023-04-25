/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:30:42 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/17 13:52:01 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

// unsigned int ClapTrap::_pointsHit = 10;
// unsigned int ClapTrap::_pointsEnergy = 10;
// unsigned int ClapTrap::_pointsAttack = 0;

/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */

ClapTrap::ClapTrap() : _Name("Default ClapTrap constructed") , _pointsHit(10) , _pointsEnergy(10) , _pointsAttack(0)
{
	std::cout << "Constructor default ClapTrap called whose name is " << this->_Name << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _Name(name) , _pointsHit(10) , _pointsEnergy(10) , _pointsAttack(0)
{
	std::cout << "Constructor default ClapTrap called whose name is " << this->_Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "Constructor copy ClapTrap called and all atributes copied. Name of the original: " << 
	copy.getName() << ". Name of copy: " << this->_Name  
	<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor default ClapTrap called for " << this->_Name << std::endl;
}


ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Operator asignation ClapTrap from Instance: " << src._Name << std::endl;
	if (this == &src)
		return (*this);
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
		std::cout << this->_Name << " ClapTrap is attacking to: "  << target << " with points atttack " 
		<< this->_pointsAttack << std::endl;
		this->_pointsEnergy--;
	}
	else
		std::cout << this->_Name << " has no energy to attack to " << target << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_pointsHit >= amount)
	{
		std::cout << this->_Name << " ClapTrap takeDamage with : " << amount 
		<< " points."  <<   std::endl;
		this->_pointsHit -= amount;
	}
	else
		std::cout << this->_Name << " ClapTrap  can not takeDamage with : " << amount 
		<< " points."  <<   std::endl;

		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_pointsEnergy >= 1)
	{		
		std::cout << this->_Name << " ClapTrap  is repaired by : " << amount 
		<< " points."  <<   std::endl;
		this->_pointsEnergy -= 1;
		this->_pointsHit += amount;
	}
	else
		std::cout << this->_Name << " has no energy enough to beRepaired ClapTrap " << this->_Name << std::endl;
}

const std::string ClapTrap::getName() const
{
	return (this->_Name);
}

void  ClapTrap::printClass() const
{
	std::cout <<  "\n**************\n"
	<< "Properties from class: " << this->_Name
	<<  "\nEnergy: " << this->_pointsEnergy
	<<  "\nHitPoints: " << this->_pointsHit
	<<  "\nAtack: " << this->_pointsAttack
	<<  "\n**************\n "
	<< std::endl;
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
