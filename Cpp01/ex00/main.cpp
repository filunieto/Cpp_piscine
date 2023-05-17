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
/*   Updated: 2023/02/25 14:25:15 by fnieves          ###   ########.fr       */
>>>>>>> cpp02
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name1 = "Flipi";
	std::string name2 = "Wiki";

	Zombie *Zombie1;
	
	Zombie1 = newZombie(name1);
	Zombie1->announce();
	delete Zombie1;
	/*------------------------------------------------*/

	randomChump(name2);
	//new_Zombie->announce();
<<<<<<< HEAD

=======
>>>>>>> cpp02
	return (0);
}