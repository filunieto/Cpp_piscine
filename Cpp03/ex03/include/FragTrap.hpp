/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:02:48 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/16 23:25:44 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:

private:
	/* data */
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	
	/* functions */
	FragTrap & operator=(const FragTrap &rhs);
	void highFivesGuys(void); 
};



#endif