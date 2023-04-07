/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:03:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/07 20:31:39 by fnieves          ###   ########.fr       */
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

/* 
 Este constructor de copia utiliza el operador de asignación sobrecargado
 para copiar los valores del objeto copy en el objeto actual.
 */
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

/*
	El operador de asignación establece _pointInt en el
	valor de copy.getRawBits() y devuelve una referencia
	al objeto actual. 
	Cómo se devuelve una clase, solo con *this??
*/
Fixed& Fixed::operator=(Fixed const &copy)
{
	std::cout << "operator designation " << std::endl;
	this->_pointInt = copy.getRawBits();
	return *this; //es este valor una clase??
}

Fixed::Fixed(const int i)
{
	std::cout << "int constructor called and initialice to " << i << std::endl;
	this->_pointInt = i << this->_nbBits;
	return ;

}

Fixed::Fixed(const float f)
{
	std::cout << "float constructor called and initialice to " << f << std::endl;
	this->_pointInt = (int)roundf(f * (1 << this->_nbBits));
	return ;
}

int Fixed::toInt() const
{
	return ( this->_pointInt >> this->_nbBits);
}


// member functions

float Fixed::toFloat() const
{
	return (((float) this->_pointInt ) / (1 << this->_nbBits) );
}


std::ostream  &operator<<(std::ostream &ost,  Fixed const &fixed)
{
	std::cout << " Operator (<<) called with " << &ost << " and " << &fixed << std::endl;
	ost << fixed.toFloat();
	return (ost);
}