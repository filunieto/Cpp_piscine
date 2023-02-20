/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:02:03 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/19 20:57:17 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>





class Zombie
{
private:
	std::string _name;
	/* data */
public:
	Zombie(/* args */);
	~Zombie();
	void setName(std::string name);
};



#endif 







// Zombie::Zombie(/* args */)
// {
// }

// Zombie::~Zombie()
// {
// }
