/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:18:14 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/10 02:16:34 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_HPP
#define HEADERS_HPP

#include "Fixed.hpp"
#include "Point.hpp" 

bool bsp (Point const a, Point const b, Point const c, Point const point);
Fixed area( Point const  &a, Point const &b, Point const &c);


#endif