/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:49:32 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/10 02:18:47 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Headers.hpp"

int main()
{
	const Point a(0, 0);
	const Point b(10, 0);
	const Point c(0, 10);
	const Point d(6, 6);

	std::cout << "Point x=" << p.getX() << " y=" << p.getY() << " is " << (bsp(a, b, c, p) ? "inside" : "outside") << std::endl;



	return (0);
}