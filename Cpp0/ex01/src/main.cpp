/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:37:02 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/07 19:49:48 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <csignal>
#include "../include/PhoneBook.cpp"
#include "../include/Contact.hpp"



int	main()
{
	PhoneBook	PhoneBook;
	std::string	input;
	
	print_welcome();
	while ( true )
	{
		_getUserInput("What would you like to do? ADD, SEARCH or EXIT", input)
	}
	return (0);	
}


