/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:03:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/11 17:32:02 by fnieves-         ###   ########.fr       */
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
	/* Also possible
		this->_pointInt = copy.getRawBits();
		_pointInt = copy.getRawBits();
	*/
	return ;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits: " << this->_pointInt << std::endl;
	std::cout << "getRawBits: " << this->_pointInt  << std::endl;
	return (this->_pointInt);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setting raw bits (setRawBits) to: " << raw << std::endl;
	this->_pointInt = raw;
	std::cout << "setting raw bits (setRawBits) to: " << this->_pointInt << std::endl;
	return;
}


Fixed& Fixed::operator=(Fixed const &copy)
{
	std::cout << "operator designation " << std::endl;
	this->_pointInt = copy.getRawBits();
	return *this; //es este valor por referncia para devolver una clase??
}

Fixed::Fixed(const int i)
{
	std::cout << "int constructor called and initialice to " << i << std::endl;
	//bitshifting
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


float Fixed::toFloat() const
{
	return (((float) this->_pointInt ) / (1 << this->_nbBits) );
}

std::ostream  &operator<<(std::ostream &ost,  Fixed const &fixed)
{
	ost << fixed.toFloat();
	std::cout << " Operator (<<) called with "  << fixed.toFloat() << std::endl;
	return (ost);
}

//New part of ex02

// Comparison operators
bool Fixed::operator>(Fixed const &rhs) const
{
	/*
	also valid?
	return (this->_pointInt > rhs._pointInt);
	*/
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

// Arithmetic operators

Fixed  Fixed::operator+(Fixed const &rhs) const
{
	return ((Fixed)(this->getRawBits() + rhs.getRawBits()));
	/*
	we could also
		Fixed res;
		res.setRawBits(this->getRawBits() + rhs.getRawBits());
		return (res);
	*/
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return ((Fixed)(this->getRawBits() - rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	/*
		float a = this->toFloat();
		float b = rhs.toFloat();
		Fixed res(a *b);
		return (res);
	*/
	return ((Fixed) (this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return ((Fixed) (this->toFloat() / rhs.toFloat()));
}

// Preincrement, postincrement, predecrement and postdecrement operators

Fixed & Fixed::operator++()
{
	this->_pointInt++;
	return (*this);
}

Fixed & Fixed::operator--()
{
	this->_pointInt--;
	return(*this);
}

Fixed Fixed::operator++(int n)
{
	Fixed	tmp;
	int		raw = this->getRawBits();

	tmp = *this;
	raw = raw + n;
	this->setRawBits(raw);
	return (tmp);
}

Fixed Fixed::operator--(int n)
{
	Fixed	tmp = *this;
	int		raw = tmp.getRawBits();

	raw = raw - n;
	tmp.setRawBits(raw);
	return (tmp);
	
}

// Max and min
Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (b < a)
		return (b);
	return (a);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (b < a)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed const & a, Fixed const &b)
{
	if (b < a)
		return ((Fixed &)b);
	return ((Fixed &) a);
}

Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	if (b < a)
		return ((Fixed &) a);
	return ((Fixed &) b);
}