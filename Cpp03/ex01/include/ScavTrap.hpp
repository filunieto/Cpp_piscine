/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:03:54 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/15 19:29:18 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"



class ScavTrap: public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(const std::string  & name);
	ScavTrap(const ScavTrap & copy);
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap &rhs);
	void guardGate();
	void attack(const std::string  &name);
};


#endif
