/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:01:33 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/09 13:20:45 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

PhoneBook::PhoneBook()
{
	//Contact	Contact1;
	std::cout <<  "PhoneBook constructor called" << std::endl;
	return ;
}

void PhoneBook::addContact(void)
{
	std::string field;
	//bool isnb;
	
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
	std::cout << "\nHERE contact's firts name: " << field << std::endl;
	field.clear();
}

PhoneBook::~PhoneBook()
{
	std::cout <<  "PhoneBook deestructor called" << std::endl;
	return ;
}