/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:48:37 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/21 19:12:12 by fnieves-         ###   ########.fr       */
=======
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:58:22 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/22 16:46:18 by fnieves          ###   ########.fr       */
>>>>>>> cpp02
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	
<<<<<<< HEAD
=======
	if (N > 0)
	{	
		Zombie* newHorde = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			newHorde[i].setName(name);
			newHorde[i].announce();
			
		}
		return(newHorde);
	}
	else
		return (NULL);
>>>>>>> cpp02
}