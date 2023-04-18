/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:52:29 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/09 00:47:52 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
public:
// Constructor per default , copy  and destructor
	Fixed();
	~Fixed();
	Fixed(Fixed const &copy);
	
// member functions
	Fixed & operator=(Fixed const &copy);
	int	getRawBits() const;
	void setRawBits(int const raw);
	
private:
	int _pointInt;
	static const int _nbBits = 8;
};

#endif