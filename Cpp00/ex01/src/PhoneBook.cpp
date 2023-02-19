/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:01:33 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/19 17:50:25 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
	foro transfiere
*/
#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"
#include <iomanip> 

bool	ft_aredigits(std::string field_nb)
{
	int i = 0;
	while (i < (int)field_nb.length())
	{
		if (std::isdigit(field_nb[i]))
			i++;
		else
			return (false);
	}
	return (true);
}

PhoneBook::PhoneBook()
{
	this->_full = false;
	this->_index = 0;
	this->_numbContacts = 0;
	return ;
}

void PhoneBook::addContact(void)
{
	std::string field;

	if (this->_full == true)
	{
		std::cout <<  "Agenda full . You may want delete contacts: next one will delete the last one!" << std::endl;
		this->_index = MAX_CONTC - 1;
	}
	while (field.empty())
	{
		std::cout << "\nPlease introduce contact's firts name: ";
		std::cout << "for contact index " << this->_index << std::endl ;
		std::getline(std::cin, field);
		if (std::cin.eof() == true)
		{
			std::cout << "Exiting.. " << std::endl;
			std::exit(0);
		}
	}
	this->_arrayContacts[this->_index].setFirstName(field);
	field.clear();
	while (field.empty())
	{
		std::cout << "Please introduce contact's LAST name: ";
		std::getline(std::cin, field);
		if (std::cin.eof() == true)
		{
			std::cout << "Exiting.. " << std::endl;
			std::exit(0);
		}
	}
	this->_arrayContacts[this->_index].setLastName(field);
	field.clear();
	while (field.empty())
	{
		std::cout << "Please introduce contact's nick name: ";
		std::getline(std::cin, field);
		if (std::cin.eof() == true)
		{
			std::cout << "Exiting.. " << std::endl;
			std::exit(0);
		}
	}
	this->_arrayContacts[this->_index].setnickName(field);
	field.clear();
	while (field.empty() || !ft_aredigits(field))
	{
		std::cout << "Please introduce contact's Phonenumber (just numbers): ";
		std::getline(std::cin, field);
		if (std::cin.eof() == true)
		{
			std::cout << "Exiting.. " << std::endl;
			std::exit(0);
		}
	}
	this->_arrayContacts[this->_index].setphoneNumber(field);
	field.clear();
	while (field.empty())
	{
		std::cout << "Please introduce contact's darkestSecret: ";
		std::getline(std::cin, field);
		if (std::cin.eof() == true)
		{
			std::cout << "Exiting.. " << std::endl;
			std::exit(0);
		}
	}
	this->_arrayContacts[this->_index].setdarkestSecret(field);
	field.clear();
	std::cout <<  "New contact added!" << std::endl;
	if (this->_full == false)
	{
		this->_numbContacts = this->_numbContacts + 1;
		this->_index += 1;
	}
	if (this->_numbContacts == MAX_CONTC)
	{
		this->_full = true;
	}
}

void	PhoneBook::searchContact(void)
{
	size_t	indxContact;
	std::string	field_nb;
	if (this->_numbContacts == 0 )
	{
		std::cout << "There are no contacts. Try to add some " << std::endl;
		return ;
	}
	printAgenda();
	do
	{
		if (this->_numbContacts == 1 )
		{
			std::cout << "You can just display the contact index 0. Please insert 0 " << std::endl;
		}
		else
			std::cout << "To display any contact introduce its index between 0 and " << this->_numbContacts - 1 << std::endl;
		getline(std::cin, field_nb);
	}while (field_nb.empty() || !ft_aredigits(field_nb));
	indxContact = std::atoi(field_nb.c_str());
	if (indxContact < 0 || indxContact > this->_numbContacts - 1)
	{	
		std::cout << "Index wrong! " << field_nb << std::endl;
		return ;
	}
	printContactAgend(indxContact);
	field_nb.clear();
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::printAgenda()
{
	printHeader();
	for (int i = 0; i < (int)this->_numbContacts; i++)
	{
		std::cout << "         ";
		std::cout << i << "|";
		std::cout << std::setw(10) << _arrayContacts[i].getshortFirstName() << "|";
		std::cout << std::setw(10)<< _arrayContacts[i].getshortLastName() << "|";
		std::cout << std::setw(10) << _arrayContacts[i].getshortnickName() << std::endl;
	}
}

void	PhoneBook::printContactAgend(size_t indxContact)
{
	std::cout <<  "First name: ";
	std::cout << std::left << std::setw(20) << _arrayContacts[indxContact].getFirstName() << std::endl;
	std::cout <<   "Last name: " ;
	std::cout << std::left << std::setw(20) << _arrayContacts[indxContact].getLastName() << std::endl;
	std::cout <<  "nick name: ";
	std::cout << std::left << std::setw(20) << _arrayContacts[indxContact].getnickName() << std::endl;
	std::cout <<  "Phone number: ";
	std::cout << std::left << std::setw(20) << _arrayContacts[indxContact].getphoneNumber() << std::endl;
	std::cout <<  "Darkest secret: ";
	std::cout << std::left << std::setw(20) << _arrayContacts[indxContact].getdarkestSecret() << std::endl;
}
