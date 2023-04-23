/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:52:29 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/09 01:01:07 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>



class Fixed
{
public:
// Constructor per default , copy  and destructor
	Fixed();
	~Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const &copy);
	
// Member functions
	Fixed & operator=(Fixed const &copy);
	int	getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

// Comparison operators
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

// Arithmetic operators

	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;
	
// Preincrement, postincrement, predecrement and postdecrement operators
	Fixed & operator++();
	Fixed &operator--();
	Fixed operator++(int n);
	Fixed operator--(int n);
	
// Max and min
	static Fixed & min(Fixed &a, Fixed &b);
	static Fixed & max(Fixed &a, Fixed &b);
	static Fixed & min(Fixed const &a, Fixed const &b);
	static Fixed & max(Fixed const & a, Fixed const &b);
	
private:
	int _pointInt;
	static const int _nbBits = 8;
};

std::ostream  &operator<<(std::ostream &ost,  Fixed const &fixed);
#endif