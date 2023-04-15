/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:04:51 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/15 19:38:16 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : _Name("Default"),  _pointsHit(100), _pointsEnergy(50) , _pointsAttack(20)
{
	std::cout << "Constructor default ScavTrap called with no paremeter Name "<< std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : _Name(name),  _pointsHit(100), _pointsEnergy(50) , _pointsAttack(20)
{
	std::cout << "Constructor default ScavTrap called with his Name: " << this->getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor default ScavTrap called with his Name: " << this->getName() << std::endl;

}


	ScavTrap(const std::string  & name);
	ScavTrap(const ScavTrap & copy);

	ScavTrap & operator=(const ScavTrap &rhs);
	void guardGate();
	void attack(const std::string  &name);