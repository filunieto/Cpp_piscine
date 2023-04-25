/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:37:35 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/16 21:19:02 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int main()
{
	//Check the constructors
	FragTrap Anonimo("Anonimo");
	Anonimo.printClass();
	FragTrap Joe("Joe");
	Joe.printClass();
	FragTrap Jander (Joe);
	Jander.printClass();
	FragTrap Manu ("Manu");
	Anonimo = Joe;
	Anonimo.printClass();

	
	
	//*****************
	Joe.attack(Jander.getName());
	Joe.takeDamage(4);
	Joe.printClass();
	Joe.beRepaired(2);
	std::cout << "\n*****After attacking**********"  << std::endl;
	Joe.printClass();
	Joe.highFivesGuys();
	Joe.printClass();
	return 0;
}