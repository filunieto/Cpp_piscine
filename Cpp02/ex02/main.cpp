/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:49:32 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/11 19:36:45 by fnieves-         ###   ########.fr       */
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

	{
		std::cout << "\nSome other tests: Comparison operators\n\n";
		Fixed a(42);
		Fixed b(50);
		Fixed c(50);
		Fixed d(0);
		Fixed e(-42);

		std::cout << "-----------------------" << std::endl;
		std::cout << "Result of " << a << " < " << b  << " is : " << (a < b) << std::endl;
		std::cout << "Result of " << a << " > " << b  << " is : " << (a > b) << std::endl;
		std::cout << "Result of " << c << " < " << b  << " is : " << (c < b) << std::endl;
		std::cout << "Result of " << d << " > " << b  << " is : " << (d > b) << std::endl;
		std::cout << "Result of " << a << " != " <<  b << " is : " << (a != b) << std::endl;
		std::cout << "Result of " << a << " == " <<  b << " is : " << (a == b) << std::endl;
		std::cout << "Result of " << b << " <= " <<  c << " is : " << (b <= c) << std::endl;
		std::cout << "Result of " << e << " >= " <<  a << " is : " << (e >= a) << std::endl;
		std::cout << "Result of " << d << " <= " <<  e << " is : " << (d <= e) << std::endl;
		std::cout << "Result of " << d << " >= " <<  e << " is : " << (d >= e) << std::endl;
		std::cout << "-----------------------" << std::endl;
	}

	{
		std::cout << "\nSome other tests: Arithmetic operators\n\n";
		Fixed a(42);
		Fixed b(50);
		Fixed c(-32.5f);
		Fixed d(12.2f);
		Fixed e;

		std::cout << "-----------------------" << std::endl;
		std::cout << "Result of " << a << " + " << b  << " is : " << (a + b) << std::endl;
		std::cout << "Result of " << a << " - " << b  << " is : " << (a - b) << std::endl;
		std::cout << "Result of " << b << " - " << a  << " is : " << (b - a) << std::endl;
		std::cout << "Result of " << c << " + " << d  << " is : " << (c + d) << std::endl;
		std::cout << "Result of " << c << " - " << d  << " is : " << (c - d) << std::endl;
		std::cout << "Result of " << d << " - " << c  << " is : " << (d - c) << std::endl;
		std::cout << "previous value of e: " << e << std::endl;
		e = a + c;
		std::cout << "new value of e: " << e << std::endl;

		std::cout << "\n" << std::endl;
		std::cout << "Result of " << a << " * " << b  << " is : " << (a * b) << std::endl;
		std::cout << "Result of " << a << " / " << b  << " is : " << (a / b) << std::endl;
		std::cout << "Result of " << b << " / " << a  << " is : " << (b / a) << std::endl;
		std::cout << "Result of " << c << " * " << d  << " is : " << (c * d) << std::endl;
		std::cout << "Result of " << c << " / " << d  << " is : " << (c / d) << std::endl;
		std::cout << "Result of " << d << " / " << c  << " is : " << (d / c) << std::endl;
		std::cout << "previous value of e: " << e << std::endl;
		e = b * d;
		std::cout << "new value of e: " << e << std::endl;
	
		 std::cout << "-----------------------" << std::endl;
	}

	return (0);
}