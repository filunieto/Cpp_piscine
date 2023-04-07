/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:49:32 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/07 13:20:52 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	std::cout << "*****		Fixed a		 *********" << std::endl;
	Fixed a;
	std::cout << "*******		Fixed b( a )		******* " << std::endl;
	Fixed b( a );
	std::cout << "*******		Fixed c		******* " << std::endl;
	Fixed c;
	
	std::cout << "*******		c = b		*******" 	 << std::endl;
	c = b;
	
	std::cout << "*******		a.getRawBits()		******* " << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}