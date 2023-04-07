/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:03:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/07 19:46:22 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _pointInt (0)
{
	std::cout << "default constructor called and initialice to 0" << std::endl;
	// this->_nbBits = 0;
	return;
}

Fixed::~Fixed()
{
	std::cout << "destructor called " << std::endl;
	return;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor  called " << std::endl;
	*this = copy;
	return ;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits: " << this->_pointInt << std::endl;
	return (this->_pointInt);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setting raw bits (setRawBits) to: " << raw << std::endl;
	this->_pointInt = raw;
	return;
}

// Why return *this;?
Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "operator designation " << std::endl;
	this->_pointInt = copy.getRawBits();
	return *this;
}