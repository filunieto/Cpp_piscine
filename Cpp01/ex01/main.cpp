/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:58:51 by fnieves           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/20 11:33:43 by fnieves          ###   ########.fr       */
=======
/*   Updated: 2023/02/22 17:21:07 by fnieves          ###   ########.fr       */
>>>>>>> cpp02
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name1 = "Flipi";
<<<<<<< HEAD
	std::string name2 = "Wiki";

	Zombie *Zombie1;
	
	Zombie1 = newZombie(name1);
	Zombie1->announce();
	delete Zombie1;
	/*------------------------------------------------*/

	randomChump(name2);
	//new_Zombie->announce();
=======
	int N = 7;
	Zombie *new_Horde ;
	// std::string name2 = "Wiki";

	// Zombie *Zombie1;
	
	// Zombie1 = newZombie(name1);
	// Zombie1->announce();
	// delete Zombie1;
	// /*------------------------------------------------*/

	// randomChump(name2);
	// //new_Zombie->announce();

	new_Horde = zombieHorde(N, name1);
	//new_Horde[1].announce();
	delete [] new_Horde; //Atention here in syntax
>>>>>>> cpp02

	return (0);
}