/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Idea.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:56:39 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/21 14:44:04 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Idea.hpp"

//	std::cout << "Constructor default Animal , No parameter name:  " << this->name << std::endl;


Idea::Idea() : _nbIdea(0)
{
	std::cout << "Constructor default Idea , inizialice to 0  " << std::endl;
}

Idea::Idea(const int &nbIdea) : _nbIdea(nbIdea)
{
	std::cout << "Constructor default Idea , inizialice to  " << this->_nbIdea << std::endl;
}

Idea::Idea(const Idea &copy) 
{
	this->_nbIdea = copy._nbIdea;
	std::cout << "Constructor default Idea copy" << std::endl;
}


Idea & Idea::operator=(const Idea &rhs)
{
	std::cout << "Asigantion = idea" << std::endl;
}

Idea::~Idea()
{
	std::cout << "Destructor default Idea :  " << this->_nbIdea << std::endl;
}