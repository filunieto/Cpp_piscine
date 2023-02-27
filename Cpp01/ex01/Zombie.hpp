/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:39 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/22 16:16:54 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();
	void announce( void ) const;
	void setName (std::string name);
};

// Zombie* newZombie( std::string name );
// void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );
#endif 
