/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prompt.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:49:55 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/08 13:16:48 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_welcome(void)
{
	std::cout << "Holi, here you have a cool agenda!" << std::endl;
}

void	print_promt(void)
{
	std::cout << "What do you want to do?" << std::endl;
	std::cout << "ADD save a new contact" << std::endl;
	std::cout << "SEARCH display your contacts" << std::endl;
	std::cout << "EXIT to close and leave" << std::endl;
}

void	say_goodbye(void)
{
	std::cout << "Adios si te vas" << std::endl;
}

