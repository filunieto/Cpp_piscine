/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:16:34 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/09 18:36:19 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Headers.hpp"

bool Point::_commentsON = false;

Point::Point() : _x(), _y()
{
	if (_commentsON)
		std::cout << " Default constructor Point called. " << std::endl;
}

Point::Point( Point const &copy) : _x(copy._x), _y(copy._y)
{
	if (_commentsON)
		std::cout << "  constructor copy Point called. " << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	if (_commentsON)
		std::cout << " constructor float called. " << std::endl;
	
}

Point::~Point()
{
	if (_commentsON)
		std::cout << "  destructor Point called. " << std::endl;
}

Point & Point::operator=(Point const & copy)
{
	// this->_x = copy._x; Not possible because _x and _y const and needs to be initialice from the begogong
	// this->_y = copy._y;
	(void)copy;
	return (*this);
}

Fixed const & Point::getX() const
{
	return (this->_x );
}

Fixed const & Point::getY() const
{
	return (this->_y );
}
