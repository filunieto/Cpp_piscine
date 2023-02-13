/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:01:28 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/13 11:59:07 by fnieves-         ###   ########.fr       */
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

std::string Contact::getshortFirstName(void)
{
	int	len;
	std::string temp;
	len = this->_firstName.length();
	if (len < 10)
		return (this->_firstName);
	else
		return (this->_firstName.substr(0,9) + ".");
}

void	Contact::setLastName(std::string LastName)
{
	this->_LastName = LastName;
}

std::string Contact::getLastName(void)
{
	return (this->_LastName);
}

std::string Contact::getshortLastName(void)
{
	int	len;
	std::string temp;
	len = this->_LastName.length();
	if (len < 10)
		return (this->_LastName);
	else
		return (this->_LastName.substr(0,9) + ".");
}

void	Contact::setnickName(std::string nickName)
{
	this->_nickName = nickName;
}

std::string Contact::getnickName(void)
{
	return (this->_nickName);
}

std::string Contact::getshortnickName(void)
{
	int	len;
	std::string temp;
	len = this->_nickName.length();
	if (len < 10)
		return (this->_nickName);
	else
		return (this->_nickName.substr(0,9) + ".");
}

std::string Contact::getdarkestSecret(void)
{
	return (this->_darkestSecret);
}

void	Contact::setdarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

std::string Contact::getphoneNumber(void)
{
	return (this->_phoneNumber);
}

void	Contact::setphoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}