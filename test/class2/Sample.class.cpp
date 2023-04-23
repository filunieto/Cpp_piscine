/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:50:49 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/02 12:51:28 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample (float const f) : pi(f)
{
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample()
{
	std::cout << "Destructor called" << std::endl;
}

void Sample::bar() const
{
	std::cout << "Bar function . Parametros: " << std::endl;
	std::cout << this->pi << std::endl;
	std::cout << pi << std::endl;	
	std::cout << this->qd << std::endl;
}