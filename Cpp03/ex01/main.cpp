/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:37:35 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/16 20:36:51 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"

int main()
{
	//Check the constructors
	ScavTrap DefaultClass;
	DefaultClass.printScavTrap();
	ScavTrap Anonimo("Anonimo");
	Anonimo.printScavTrap();
	ScavTrap Joe("Joe");
	Joe.printScavTrap();
	ScavTrap Jander (Joe);
	Jander.printScavTrap();
	ScavTrap Manu ("Manu");
	
	std::cout << "\n*****  Test for asignation:  DefaultClass = Joe;   **********"  << std::endl;
	Joe.guardGate();
	DefaultClass = Joe;
	DefaultClass.printScavTrap();
	Joe.printScavTrap();

	
	std::cout << "\n*****Testing member functions**********"  << std::endl;

	//*****************
	Joe.attack(Jander.getName());
	Joe.takeDamage(4);
	Joe.beRepaired(2);
	Joe.guardGate();
	std::cout << "\n*****After attacking**********"  << std::endl;
	Joe.printClass();
	Joe.printScavTrap();
	return 0;
}