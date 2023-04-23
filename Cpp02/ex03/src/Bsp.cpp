/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:17:20 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/10 02:15:25 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Headers.hpp"
#include <cstdio>

//Fucntion to calculate the area of a trinagle constructed bt a(x1,y1), b(x2, y2) and c ()...
Fixed area( Point const  &a, Point const &b, Point const &c)
{
	Fixed res;
	res = (	(a.getX().toFloat() * (b.getY().toFloat - c.getY().toFloat())) +
			(b.getX().toFloat() * (c.getY().toFloat - a.getY().toFloat())) +
			(c.getX().toFloat() * (a.getY().toFloat - b.getY().toFloat())) ) /2;
	return (res);
	// return Fixed (	(a.getX().toFloat() * (b.getY().toFloat - c.getY().toFloat())) +
	// 		(b.getX().toFloat() * (c.getY().toFloat - a.getY().toFloat())) +
	// 		(c.getX().toFloat() * (a.getY().toFloat - b.getY().toFloat())) ) /2;
}

	// we could also
	// 	Fixed res;
	// 	res.setRawBits(this->getRawBits() + rhs.getRawBits());
	// 	return (res);
	// */
/*
	return Fixed(
				(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) +
				(b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) +
				(c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
				)/2;
*/

// https://www.baeldung.com/cs/check-if-point-is-in-2d-triangle
// 3. Triangles Area Approach


// Acording to the thory above we will checck if the point s inside the triangle

bool bsp (Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a, b, c);
	
	Fixed B = area(point, a, b);
	if (B < 0)
		B =  B * - 1;
	else
		B = B;
	
	Fixed C = area(point, b, c);
	C = C < 0 ? C * -1 : C;
	
	Fixed D = area(point , a, c);
	D = D < 0 ? D * -1 : D;
	
	if (A == B + C + D)
		return (true);
	return (false);
}