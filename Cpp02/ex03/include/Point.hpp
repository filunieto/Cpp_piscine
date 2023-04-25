/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:16:29 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/09 17:40:22 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
	static bool _commentsON
	
public:
	Point();
	Point(const Point &copy);
	Point(const float x, const float y);
	~Point();
	
	Point &operator=(Point const &copy);
	Fixed const &getX() const;
	Fixed const &getY() const;
};

#endif