/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:10:03 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/12 14:23:04 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <csignal>
#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"
#include "Prompt.cpp"


int	main()
{
	PhoneBook	agenda;
	Contact		Contact1;
	std::string	input;

	print_welcome();
	while ( true )
	{
		print_promt();

		std::getline(std::cin, input);
		if (input == "ADD")
		{
			agenda.addContact();
		}
		else if (input == "SEARCH")
		{
			agenda.searchContact();
		}
		else if (input == "EXIT")
		{
			std::cout <<  "Salimos" << std::endl;
			return (0);
		}
		if (std::cin.eof() == true)
		{
			std::cout << "Exiting.. " << std::endl;
			std::exit(0);
		}
	}
	return (0);	
}