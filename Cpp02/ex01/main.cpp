/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:49:32 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/11 14:49:22 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	std::cout << "*****		Fixed a		 *********" << std::endl;
	Fixed a;
	std::cout << "*****		Fixed const  b( 10 )	 *********" << std::endl;

	Fixed const  b( 10 );
	std::cout << "*****		Fixed const c ( 42.42f )	 *********" << std::endl;

	Fixed const c ( 42.42f );
	std::cout << "*****		Fixed const d ( b )	 *********" << std::endl;
	Fixed const d ( b );
	
	std::cout << "*****		a = Fixed ( 1234.4321f )	 *********" << std::endl;
	a = Fixed ( 1234.4321f );
	
	std::cout << "*****	 We print stream operator with class:	a is  << a 	 *********" << std::endl;

	std::cout  << "a is " << a << std::endl;
	std::cout  << "b is " << b << std::endl;
	std::cout  << "c is " << c << std::endl;
	std::cout  << "d is " << d << std::endl;
	
	std::cout << "*****		We print stream operator with int : << a is  << a.toInt()	 *********" << std::endl;

	std::cout  << "a is " << a.toInt() << std::endl;
	std::cout  << "b is " << b.toInt()  << std::endl;
	std::cout  << "c is " << c.toInt()  << std::endl;
	std::cout  << "d is " << d.toInt()  << std::endl;

	std::cout << "**** and befor return , we can call destructors *********" << std::endl;

	return (0);
}