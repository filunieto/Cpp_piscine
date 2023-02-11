/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:01:33 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/11 23:42:14 by fnieves-         ###   ########.fr       */
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
	//Contact	Contact1;
	std::cout <<  "PhoneBook constructor called" << std::endl;
	this->_full = false;
	this->_index = 0;
	this->_numbContacts = 0;
	return ;
}

void PhoneBook::addContact(void)
{
	std::string field;
	//bool isnb;

	if (this->_full == true)
	{
		std::cout <<  "la agenda está a full . Borra contacvtos!" << std::endl;
		this->_index = MAX_CONTC - 1;
	}
	while (field.empty()) //introducing firstName
	{
		std::cout << "\nPlease introduce contact's firts name: ";
		std::cout << "for contact number " << this->_index << std::endl ;
		std::getline(std::cin, field);
		if (std::cin.eof() == true)
		{
			std::cout << "Exiting.. " << std::endl;
			std::exit(0);
		}
	}
	this->_arrayContacts[this->_index].setFirstName(field);
	field.clear();
	while (field.empty()) //introducing firstName
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
	//printAgenda();
	//std::cout << "\nHERE contact's firts name in agenda: " << this->_arrayContacts[this->_index] << std::endl;
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
	do
	{
		std::cout << "To display a contact introduce its index between 0 and " << this->_numbContacts - 1 << std::endl;
		getline(std::cin, field_nb);
	}while (field_nb.empty() || !ft_aredigits(field_nb));
	indxContact = std::atoi(field_nb.c_str()); //c_str: Returns a pointer to an array that contains a null-terminated sequence of characters equal to field_nb
	if (indxContact < 0 || indxContact > this->_numbContacts )
	{	
		std::cout << "Index wrong! " << field_nb << std::endl;
		return ;
	}
	printContactAgend(indxContact);
	field_nb.clear();
}

PhoneBook::~PhoneBook()
{
	std::cout <<  "PhoneBook deestructor called" << std::endl;
	return ;
}

void	PhoneBook::printAgenda() //anadir el formato con el punto 
{
	// if (this->_numbContacts == 0)
	// {
	// 	std::cout <<  "your agenda is empty. Go and find some friends!" << std::endl;
	// 	return ;
	// }
	for (int i = 0; i < (int)this->_numbContacts; i++)
	{
		std::cout <<  "contacto " << i << std::endl;
		std::cout <<  "First name: " << _arrayContacts[i].getFirstName() << std::endl;
		std::cout <<  "Last name: " << _arrayContacts[i].getLastName() << std::endl;
	}
}

void	PhoneBook::printContactAgend(size_t indxContact)
{
	std::cout <<  "First name: ";
	std::cout << std::left << std::setw(20) << _arrayContacts[indxContact].getFirstName() << std::endl;
	std::cout <<  "Last name: " << _arrayContacts[indxContact].getLastName() << std::endl;
}

