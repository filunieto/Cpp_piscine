/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:32:25 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/17 13:50:35 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string _Name;
		unsigned int _pointsHit;
		unsigned int _pointsEnergy;
		unsigned int _pointsAttack;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string const name); //we could also (std::string const & name)
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &src);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		const std::string getName() const;
		void printClass() const;
};

#endif
