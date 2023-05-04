/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:49:49 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/04 15:29:58 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

#include <iostream>

Character::Character(): _name("Default name Character"), inventory()
{
	std::cout << "Constructor default Character" << std::endl;
}

Character::~Character()
{
	int i = -1;
	while (++i < 4)
	{
		if (inventory[i])
			delete inventory[i];
	}
	std::cout << "Destructor default Character" << std::endl;
}

Character::Character(const std::string  &name): _name(name), inventory()
{
	std::cout << "Constructor name Character, with name " << this->_name << std::endl;
}

Character::Character(const Character &copy)
{

	int i = -1;
	while (++i < 4)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = copy.inventory[i];
		}
	}
	std::cout << "Constructor copy Character" << std::endl;
}

Character & Character::operator=(const Character & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		int i = -1;
		while (++i < 4)
		{
			if (inventory[i])
			{
				delete inventory[i];
				inventory[i] = rhs.inventory[i]->clone();
			}
		}
	}
	std::cout << "operator= Character" << std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
	return(this->_name);
}

/**
 * @brief 
 It equips the Materias in the first empty slot they find.
  In case they try to add a Materia to a full inventory, 
  don’t do anything
 * @param m 
 */
void Character::equip(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		inventory[idx] = NULL;
}


void Character::use(int idx, ICharacter& target)
{
	std::cout << "function Character::use." << std::endl;
	if (idx >= 0 && idx <= 3)
	{
		inventory[idx]->use(target);
	}
}


