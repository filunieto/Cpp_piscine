/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:01:45 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/19 20:58:40 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	
}

void Zombie::setName(std::string name){
	
	this->_name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	//Zombie* Horde1;
	Zombie Horde[N];
	
	//Horde1 = (Zombie* )malloc(sizeof(Zombie) * N);

	for (int i = 0; i < N; i++)
	{
		Horde[i].setName(name);
	}
	return (Horde);
}