/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:37:35 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/14 19:28:20 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"


int main()
{
	//Check the constructors
	ClapTrap one ("One");
	ClapTrap two ("Two");
	ClapTrap three("Three");
	ClapTrap four (two);
	ClapTrap five ("Five");
	three = five;
	
	//*****************
	
	
	
	return 0;
}