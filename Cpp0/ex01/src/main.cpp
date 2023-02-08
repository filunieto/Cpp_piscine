/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:10:03 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/08 13:18:15 by fnieves-         ###   ########.fr       */
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
	PhoneBook	PhoneBook;
	std::string	input;

	print_welcome();
	while ( true )
	{
		print_promt();
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout <<  "Add contact" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout <<  "SEARCH contact" << std::endl;
		}
		else if (input == "EXIT")
		{
			std::cout <<  "Salimos" << std::endl;
			return (0);
		}
	}
	return (0);	
}