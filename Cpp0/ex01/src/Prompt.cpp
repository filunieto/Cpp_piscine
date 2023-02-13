/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prompt.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:49:55 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/12 14:12:29 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Prompt.hpp"

void	print_welcome(void)
{
	std::cout << "Holi, here you have a cool agenda!" << std::endl;
}

void	print_promt(void)
{
	std::cout << "\n### What do you want to do? ###" << std::endl;
	std::cout << BLUE << "ADD save a new contact" << RESET << std::endl;
	std::cout << MAGENTA << "SEARCH display your contacts" << RESET << std::endl;
	std::cout << GREEN << "EXIT to close and leave" << RESET << std::endl;
}

void	say_goodbye(void)
{
	std::cout << "Adios si te vas" << std::endl;
}

void	printHeader(void)
{
	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
}
