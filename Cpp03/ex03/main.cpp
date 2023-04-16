/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:37:35 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/16 23:37:53 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"
#include "include/DiamondTrap.hpp"



int main()
{
	//Check the constructors
	DiamondTrap Naide;
	Naide.printClass();
	DiamondTrap Anonimo("Anonimo");
	Anonimo.printClass();
	DiamondTrap Joe("Joe");
	Joe.printClass();
	DiamondTrap Jander (Joe);
	Jander.printClass();
	DiamondTrap Manu ("Manu");
	std::cout << "\n*****  	Anonimo = Joe**********"  << std::endl;

	Anonimo = Joe;
	Anonimo.printClass();

	std::cout << "\n*****  Test for functions;   **********"  << std::endl;

	
	//*****************
	Joe.attack(Jander.getName());
	Joe.takeDamage(4);
	Joe.printClass();
	Joe.beRepaired(2);
	std::cout << "\n*****After attacking**********"  << std::endl;
	Joe.printClass();
	Joe.highFivesGuys();
	Joe.whoAmI();
	Joe.printClass();
	return 0;
}