/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:09 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/20 11:24:16 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//we delete in the programm after using

Zombie* newZombie( std::string name )
{
	Zombie *Zombie1;
	
	Zombie1 = new Zombie(name);
	return (Zombie1);
}

/* 
Zombie* newZombie( std::string name ) {
	return (new Zombie(name));
}
---------------------------------
1. Memory reservation
Zombie *Zombie1;
Zombie1 = new Zombie(name);
Zombie1->announce();
delete Zombie1;

*/


