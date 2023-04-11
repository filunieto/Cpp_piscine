/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:03:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/11 14:56:55 by fnieves-         ###   ########.fr       */
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

/**
 * @brief Construct a new Fixed:: Fixed object
 *
 *The value of i is shifted to the left (<<) by the number of fraction bits _nbBits,
	which means that it moves _nbBits bits to the left.
	The reason for doing this is that _pointInt represents a fixed-point value that has _nbBits in it.
	fixed-point value that has _nbBits fraction bits, which means that the _nbBits bits are moved to the left.
	means that the _nbBits least significant bits of _pointInt
	represent the fractional part of the fixed-point value.
	Therefore, shifting i to the left by _nbBits bits,
	moves the integer part of i to the left, allowing the least significant bits of _pointInt to represent the fractional part of the fixed-point value.
	the least significant bits of _pointInt to be used to represent the fractional part of the fixed point value.
	represent the fractional part of the fixed-point value.

 	El valor de i se desplaza hacia la izquierda (<<) por el número de bits de fracción _nbBits,
	lo que significa que se mueve _nbBits bits hacia la izquierda.
	La razón para hacer esto es que _pointInt representa un valor
	de punto fijo que tiene _nbBits bits de fracción, lo que
	significa que los _nbBits bits menos significativos de _pointInt
	representan la parte fraccionaria del valor de punto fijo.
	Por lo tanto, al desplazar i hacia la izquierda por _nbBits bits,
	se mueve la parte entera de i a la izquierda, lo que permite
	que los bits menos significativos de _pointInt se utilicen para
	representar la parte fraccionaria del valor de punto fijo.
 * @param i 
 */
Fixed::Fixed(const int i)
{
	this->_pointInt = i << this->_nbBits;
	std::cout << "int constructor called and initialice to " << this->_pointInt << std::endl;
	//bitshifting
	return ;
}

Fixed::Fixed(const float f)
{
	this->_pointInt = (int)roundf(f * (1 << this->_nbBits));
	std::cout << "float constructor called and initialice to " << this->_pointInt << std::endl;
	return ;
}

/* 
1. We are passing the object as a const reference because we do not
 want to change the object
2. We are using the *this operator to point to the current object we are creating.
3. We are using the = operator to assign the copy to the current object.
4. We are using the return statement to return the current object. 
*/
Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor  called " << std::endl;
	*this = copy;
	return ;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits: " << this->_pointInt << std::endl;
	std::cout << "getRawBits: "  << std::endl;
	return (this->_pointInt);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setting raw bits (setRawBits) to: " << raw << std::endl;
	std::cout << "setting raw bits (setRawBits) to: " << std::endl;
	this->_pointInt = raw;
	return;
}

/*
The assignment operator sets _pointInt to the
	value of copy.getRawBits() and returns a reference to the current
	to the current object. It allows concatenation of assignments,
	as in a = b = c, where a, b, and c are all objects of type Fixed.
*/
Fixed& Fixed::operator=(Fixed const &copy)
{
	std::cout << "operator designation " << std::endl;
	this->_pointInt = copy.getRawBits();
	return (*this);
}


int Fixed::toInt() const
{
	return ( this->_pointInt >> this->_nbBits);
}


/**
 * @brief 
takes the raw fixed-point value (_pointInt) of the current object and converts to float using a float operator.
 is taken from the current object and converted to float using a C++ (float) static
 C++ static conversion (cast) operator (float).
 This float value is then divided by 1 << _nbBits.
 This operation is equivalent to shifting one bit 1 to the left _nbBits 
 times to the left _nbBits, which results in a 
 value of 2^_nbBits.  This means that the float value is
 value is divided by the value representing the fractional part 
 of the fixed-point value.
 * @return float 
 */
float Fixed::toFloat() const
{
	return (((float) this->_pointInt ) / (1 << this->_nbBits) );
}

/**
 * @brief 

This is the operation, from main.cpp :
	Fixed a;
	std::cout  << "a is " << a << std::endl;
	
Here is the explanation for the code below:
1. We are overloading an operator in a class, so the syntax is
		<< operator<<(std::ostream &ost,  Fixed const &fixed)
2. The first parameter is always the ostream object that will be the left operand
in the example :  " std::cout  << "a is " ..."
3. The second parameter is always the object that will be the right operand
(Fixed) a
4. The first parameter is always passed by reference to avoid a copy of the object
5. The second parameter is always passed by reference to avoid a copy of the object
6. The second parameter is always a constant because we do not want to modify the object
7. The return value is always an ostream object
8. The return value is always passed by reference to avoid a copy of the object
9. The return value is always "ost" because we want to be able to chain operators 
 * @param ost 
 * @param fixed 
 * @return std::ostream& 
 */


std::ostream  &operator<<(std::ostream &ost,  Fixed const &fixed)
{
	std::cout << " --Operator (<<) called-- " << std::endl;
	ost << fixed.toFloat();
	//we return the ostream object (means the std::cout)
	return (ost);
}