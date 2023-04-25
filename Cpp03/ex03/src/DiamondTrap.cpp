/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 21:46:41 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/16 23:39:54 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	//this->_Name = this->_Name + " _clap_name";
	std::cout << "Constructor default DiamondTrap called with NO name\n";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name")
{
	std::cout << "Constructor default DiamondTrap called whose name is " << this->_Name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	this->_Name = copy._Name;
	std::cout << "Constructor copy DiamondTrap called whose name is " << this->_Name << std::endl;
	//this->_pointsHit = copy.FragTrap::_pointsHit;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor default DiamondTrap called with  name: " << this->_Name << std::endl; ;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "operator= DiamondTrap called with  name: " << this->_Name << std::endl; ;
	return (*this);
}


void	DiamondTrap::whoAmI()
{
	std::cout << "Who am I? a DiamondTrap? ,  I am:  " << this->_Name 
	<< " ,and my Claptrap name is   " << ClapTrap::_Name << std::endl;
}