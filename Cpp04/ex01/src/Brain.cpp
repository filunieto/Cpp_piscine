/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:54:35 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/02 12:44:59 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"



Brain::Brain() : _BrainAnimal("Animal without brain")
{
	// for (int i = 0; i < MAX_IDEA; i++)
	// 	_idea[i] = 0;
	std::cout << "Constructor default Brain. No parameter." << std::endl;
}

// Brain::Brain(const std::string & BrainAnimal) : _BrainAnimal(BrainAnimal)
// {
// 	// for (int i = 0; i < MAX_IDEA; i++)
// 	// 	_idea[i] = 0;
// 	std::cout << "Constructor default Brain , inizialice to  " << this->_BrainAnimal << std::endl;
// }

Brain::Brain(const Brain &copy)
{
	this->_BrainAnimal= copy._BrainAnimal;
	for (int i = 0; i < MAX_IDEA; i++)
		this->_idea[i] = copy._idea[i];
	std::cout << "Constructor default Brain copy" << std::endl;
}

Brain & Brain::operator=(const Brain &rhs)
{
	std::cout << "Asigantion = Brain" << std::endl;
	if (this != &rhs)
	{	
		this->_BrainAnimal = rhs._BrainAnimal;
		for (int i = 0; i < MAX_IDEA; i++)
			this->_idea[i] = rhs._idea[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor default Brain :  " << this->_BrainAnimal << std::endl;
}

void Brain::setBrain(const std::string &nameBrain)
{
	_BrainAnimal = nameBrain;
}

const std::string & Brain::getBrain()
{
	return (_BrainAnimal);
}


void Brain::setIdea(unsigned int indexIdea, const unsigned int idea)
{
	_idea[indexIdea] = idea;
}
	
const unsigned int & Brain::getIdea(unsigned int indexIdea) const
{
	return (_idea[indexIdea]);
}