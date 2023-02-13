/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:00:10 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/13 20:51:04 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP
#include <iostream>
#include "Contact.hpp"
#include "Prompt.hpp"
#include <string>
#include <csignal>

#define MAX_CONTC 8

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



#endif