/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:39 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 12:31:02 by fnieves-         ###   ########.fr       */
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


Zombie* zombieHorde( int N, std::string name );
#endif 
