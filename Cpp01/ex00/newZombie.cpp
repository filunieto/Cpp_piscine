/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:09 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 12:22:36 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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


