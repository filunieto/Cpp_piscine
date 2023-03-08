/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:58:51 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 12:30:39 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	leaks_func(void)
{
	system("leaks zombie");
}

int main(void)
{
	std::string name1 = "Carmelo";
	int N = 7;
	Zombie *new_Horde ;


	new_Horde = zombieHorde(N, name1);

	delete [] new_Horde; //Atention here in syntax
	//atexit(leaks_func);
	return (0);
}