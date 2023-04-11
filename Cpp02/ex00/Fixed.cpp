/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:03:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/11 13:17:47 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
/**
 * @brief Construct a new Fixed:: Fixed object
 * 
 */
Fixed::Fixed() : _pointInt (0)
{
	std::cout << "default constructor called and initialice to 0" << std::endl;
	// this->_nbBits = 0;
	return;
}

// Fixed::Fixed()
// {
// 	std::cout << "default constructor called and initialice to 0" << std::endl;
// 	this->_pointInt = 0;
// 	return;
// }

/**
 * @brief Destroy the Fixed:: Fixed object
 * 
 */
Fixed::~Fixed()
{
	std::cout << "destructor called " << std::endl;
	return;
}

/**
 @brief 

1. We are passing the object as a const reference because we do not
 want to change the object
2. We are using the *this operator to point to the current object.
3. We are using the = operator to assign the copy to the current object.
4. We are using the return statement to return the current object. 
*/

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor  called " << std::endl;
	*this = copy;
	return ;
}

/**
 * @brief Get the Raw Bits object	// Why return this->_pointInt;?
 * @return int 
 */
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


Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "operator designation " << std::endl;
	this->_pointInt = copy.getRawBits();
	return *this;
}