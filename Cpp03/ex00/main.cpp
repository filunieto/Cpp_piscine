/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:37:35 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/15 15:08:45 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"


int main()
{
	//Check the constructors
	ClapTrap one ("One");
	ClapTrap two ("Two");
	ClapTrap three("Three");
	ClapTrap four (two);
	ClapTrap five ("Five");
	three = five;
	
	//*****************
	five.attack(one.getName());
	two.takeDamage(4);
	four.beRepaired(2);
	
	return 0;
}