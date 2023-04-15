/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:04:51 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/15 22:29:16 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

//hacer los constructoirers con la herencia

ScavTrap::ScavTrap::ScavTrap() : ClapTrap("default", 100, 50, 20) 
{
	std::cout << "Constructor default ScavTrap called with NO name\n";
	return;
}


ScavTrap::ScavTrap(const std::string &name) : _Name(name),  _pointsHit(100), _pointsEnergy(50) , _pointsAttack(20)
{
	std::cout << "Constructor default ScavTrap called with his Name: " << this->getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor default ScavTrap called with his Name: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "Constructor copy ScavTrap called with his Name: " << this->getName() << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this == &rhs)
		return (*this);
}


	void guardGate();
	void attack(const std::string  &name);