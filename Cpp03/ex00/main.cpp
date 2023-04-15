/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:37:35 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/15 18:11:28 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"


int main()
{
	//Check the constructors
	ClapTrap Jhon ("Jhon");
	//one.printClass();
	ClapTrap Willy ("Willy");
	ClapTrap Joe("Joe");
	Joe.printClass();
	ClapTrap Jander (Joe);
	Jander.printClass();
	ClapTrap Manu ("Manu");
	Willy = Manu;
	Willy.printClass();

	
	
	//*****************
	Willy.attack(Jander.getName());
	Joe.takeDamage(4);
	Jander.beRepaired(2);
	std::cout << "After attacking "  << std::endl;
	Joe.printClass();
	Willy.printClass();
	Jander.printClass();
	return 0;
}