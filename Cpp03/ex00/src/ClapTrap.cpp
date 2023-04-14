/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:30:42 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/14 16:39:48 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name)
{
	std::cout << "Constructor default ClapTrap called whose name is " << this->_Name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor default ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Constructor copy ClapTrap called" << std::endl;
	*this = copy;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Operator asignation ClapTrap" << std::endl;
}













// {
// private:
// 	/* data */
// public:
// 	ClapTrap(/* args */);
// 	~ClapTrap();
// };

// ClapTrap::ClapTrap(/* args */)
// {
// }

// ClapTrap::~ClapTrap()
// {
// }
