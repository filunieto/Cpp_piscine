/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:49:32 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/11 19:01:46 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	std::cout << "*****		Fixed a		 *********" << std::endl;
	Fixed a;
	std::cout << "*****		Fixed const  b( 10 )	 *********" << std::endl;

	Fixed const  b(Fixed(5.06f) * Fixed(42));

	
	// std::cout  << a << std::endl;
	// std::cout  << ++a << std::endl;
	// std::cout  << a << std::endl;
	// std::cout  << a++ << std::endl;
	// std::cout  << a << std::endl;

	std::cout << "\n Fixed::max( a, b ) \n";
	std::cout  << Fixed::max( a, b ) << std::endl;

	return (0);
}