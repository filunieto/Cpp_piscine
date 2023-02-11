/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:00:10 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/11 23:16:13 by fnieves-         ###   ########.fr       */
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
	void searchContact(void);
	void printAgenda(void);
	void printContactAgend(size_t index);
	
private:
	size_t	_numbContacts;
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