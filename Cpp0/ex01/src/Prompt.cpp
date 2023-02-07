/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prompt.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:49:55 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/07 19:58:53 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_welcome(void)
{
	std::cout << "What do you want to do?" << std::endl;
	std::cout << "ADD save a new contact" << std::endl;
	std::cout << "SEARCH display your contacts" << std::endl;
	std::cout << "EXIT to close and leave" << std::endl;
}