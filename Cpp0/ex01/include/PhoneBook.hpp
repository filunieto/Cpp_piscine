/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:00:10 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/10 21:42:46 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#define MAX_CONTC 3

class PhoneBook {
	
public:
	PhoneBook();
	~PhoneBook();

	void addContact(void);
	void printAgenda(void);
	void printContact(size_t index);
	
private:
	size_t	_nbContacts;
	bool	_full;
	size_t	_index;
	Contact	_arrayContacts[MAX_CONTC];
};


// class PhoneBook
// {
// private:
// 	/* data */
// public:
// 	PhoneBook(/* args */);
// 	~PhoneBook();
// };

// PhoneBook::PhoneBook(/* args */)
// {
// }

// PhoneBook::~PhoneBook()
// {
// }

#endif