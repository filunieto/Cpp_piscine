/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:09:04 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 20:17:41 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.cpp"
#include "HumanA.cpp"
#include "HumanB.cpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.
	}
	return (0);
}