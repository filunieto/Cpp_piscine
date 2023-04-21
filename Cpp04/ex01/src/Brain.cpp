/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:54:35 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/21 14:54:27 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"



Brain::Brain() : _BrainAnimal("Animal without brain")
{
	std::cout << "Constructor default Brain. No parameter." << std::endl;
}

Brain::Brain(const std::string & BrainAnimal) : _BrainAnimal(BrainAnimal)
{
	std::cout << "Constructor default Brain , inizialice to  " << this->_BrainAnimal << std::endl;
}

Brain::Brain(const Brain &copy)
{
	this->_BrainAnimal= copy._BrainAnimal;
	std::cout << "Constructor default Brain copy" << std::endl;
}

Brain & Brain::operator=(const Brain &rhs)
{
	std::cout << "Asigantion = Brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor default Brain :  " << this->_BrainAnimal << std::endl;
}