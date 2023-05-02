/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:49:46 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/03 00:26:26 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(): _type("Default type AMateria")
{
	std::cout << "Constructor default AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destructor default AMateria" << std::endl;
}

AMateria::AMateria(const std::string  &type): _type(type)
{
	std::cout << "Constructor name AMateria, with name " << this->_type << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	_type = copy._type;
	std::cout << "Constructor copy AMateria" << std::endl;
}

AMateria & AMateria::operator=(const AMateria & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}