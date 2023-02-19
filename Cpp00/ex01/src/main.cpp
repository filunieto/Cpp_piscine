/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:10:03 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/13 20:50:50 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"


int	main()
{
	PhoneBook	agenda;
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
			say_goodbye();
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