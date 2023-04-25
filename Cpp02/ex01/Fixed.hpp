/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:52:29 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/09 00:48:00 by fnieves          ###   ########.fr       */
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
	
// member functions
	Fixed & operator=(Fixed const &copy);
	int	getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
	
	
private:
	int _pointInt;
	static const int _nbBits = 8;
};

std::ostream  &operator<<(std::ostream &ost,  Fixed const &fixed);
#endif