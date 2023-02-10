/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:01:28 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/10 13:36:27 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact()
{
	//std::cout <<  "contact constructor called" << std::endl;
	return ;
}

Contact::~Contact()
{
	//std::cout <<  "contact deestructor called" << std::endl;
	return ;
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

std::string Contact::getFirstName(void)
{
	return (this->_firstName);
}