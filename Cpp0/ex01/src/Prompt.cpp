/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prompt.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:49:55 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/13 20:43:41 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Prompt.hpp"

void	print_welcome(void)
{
	std::cout << RED << "Holis, here you have a cool crappy awesome phonebook agenda! ☎️ " << RESET << std::endl;
}

void	print_promt(void)
{
	std::cout << "\n### What do you want to do? ###" << std::endl;
	std::cout << BLUE << "ADD: save a new contact ➕" << RESET << std::endl;
	std::cout << MAGENTA << "SEARCH: display your contacts 🔎" << RESET << std::endl;
	std::cout << GREEN << "EXIT: to close and leave 👋" << RESET << std::endl;
}

void	say_goodbye(void)
{
	std::cout << COLORX << "Ciao if you are leaving  😢" << RESET << std::endl;
}

void	printHeader(void)
{
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First name" << "|";
	std::cout << std::right << std::setw(10) << "Last name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
}
