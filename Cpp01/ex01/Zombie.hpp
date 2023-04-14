/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:39 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/21 19:12:25 by fnieves-         ###   ########.fr       */
=======
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:39 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/22 16:16:54 by fnieves          ###   ########.fr       */
>>>>>>> cpp02
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
<<<<<<< HEAD
	Zombie(std::string name);
	~Zombie();
	//void setName(std::string name);
	void announce( void );
=======
	Zombie();
	~Zombie();
	void announce( void ) const;
	void setName (std::string name);
>>>>>>> cpp02
};

// Zombie* newZombie( std::string name );
// void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );
<<<<<<< HEAD


=======
>>>>>>> cpp02
#endif 
