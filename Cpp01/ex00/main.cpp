/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:58:51 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 12:14:21 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	leaks_func(void)
{
	system("leaks zombie");
}

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
	/*------------------------------------------------*/
	//atexit(leaks_func);
	return (0);
}