/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:09:04 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/28 23:37:11 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

/*
Por qué en Human A, no podemos poner esta función, para comprobar que weapon , no es null, cal igual que hacemos en B
void HumanA::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their  " << _weapon.getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon " << std::endl;
}

 En Weapon.cpp
Podríamos pasar weapon así?
// void	Weapon::setType (std::string typeWeapon const) ¿podríamos sin que sea por referencia?
// {
// 	this->_type = typeWeapon;
// }

std::string const & Weapon::getType(void) const //por qué const?
{
	return (this->_type);
}

EN Humab B (usamos referenica por el enunciado , no?
void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

*/

int main()
{
	{
		Weapon club = Weapon("crude spiked club1");
		//Weapon club3 = Weapon(NULL); //esto no podrmias hacerlo al ser por refencia
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club1");
		bob.attack();
		
	}
	{
		Weapon club = Weapon("crude spiked club2");
		//Weapon club2 = Weapon();
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club2");
		jim.attack();
		// club.setType(NULL); //por qué no podemos ponerlo a null? A, si no es por referencia
		// jim.attack();
	}
	return (0);
}