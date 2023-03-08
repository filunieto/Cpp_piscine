/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:09:04 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 17:27:23 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

/*


 En Weapon.cpp

	//we can not do "Weapon club;" and after "club = Weapon("crude spiked club1");"
	// If we declare the class we need to initialice from the beggining
	Weapon club3 = Weapon(NULL); >>> we can not do it
	club.setType(NULL); >>> we can not do it
*/

void	leaks_func(void)
{
	system("leaks unnecessaryViolence");
}

int main()
{
		std::cout  << " *********************** " << std::endl;
	{
		Weapon *club1 = new Weapon("Golden axe");
		Weapon *club2 = new Weapon("Recortada");
		Weapon sword = Weapon("Sword");
		HumanA *Pau = new HumanA("Pau", *club2);
		HumanA *Mae = new HumanA("Mae", sword);
		HumanA Ana("Ana", *club1);
		Ana.attack();
		Pau->attack();
		Mae->attack();
		// club.setType("some other type of club1");
		// bob.attack();
		delete club1;
		delete club2;
		delete Pau;
		delete Mae;
	}
	std::cout  << " *********************** " << std::endl;
	{
		Weapon club = Weapon("Porra");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("smaller Porra");
		bob.attack();
	}
	std::cout  << " *********************** " << std::endl;
	{
		Weapon club = Weapon("bastón");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("bastonazo");
		jim.attack();
	}
	//atexit(leaks_func);
	return (0);
}