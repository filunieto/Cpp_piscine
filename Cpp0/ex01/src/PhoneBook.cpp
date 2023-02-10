/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:01:33 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/10 13:56:57 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
	foro transfiere
*/
#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

PhoneBook::PhoneBook()
{
	//Contact	Contact1;
	std::cout <<  "PhoneBook constructor called" << std::endl;
	this->_full = false;
	this->_index = 0;
	this->_nbContacts = 0;
	return ;
}

void PhoneBook::addContact(void)
{
	std::string field;
	//bool isnb;

	if (this->_full == true)
	{
		std::cout <<  "la agenda está a full . Borra contacvtos!" << std::endl;
		return ;
	}
	while (field.empty())
	{
		std::cout << "\nPlease introduce contact's firts name: ";
		std::getline(std::cin, field);
		if (std::cin.eof() == true)
		{
			std::cout << "Exiting.. " << std::endl;
			std::exit(0);
		}
	}
	this->_arrayContacts[this->_index].setFirstName(field);
	if (this->_full == false)
	{
		this->_nbContacts = this->_nbContacts + 1;
		this->_index += 1;
	}
	if (this->_nbContacts == 8)
		this->_full = true;
	printAgenda();
	//std::cout << "\nHERE contact's firts name in agenda: " << this->_arrayContacts[this->_index] << std::endl;
	field.clear();
}

PhoneBook::~PhoneBook()
{
	std::cout <<  "PhoneBook deestructor called" << std::endl;
	return ;
}

void	PhoneBook::printAgenda()
{
	if (this->_nbContacts == 0)
	{
		std::cout <<  "your agenda is empty. Go and find some friends!" << std::endl;
		return ;
	}

	for (int i = 0; i < (int)this->_nbContacts; i++)
	{
		std::cout <<  "contacto " << i << std::endl;
		std::cout <<  "nombre: " << _arrayContacts[i].getFirstName() << std::endl;
	}
}