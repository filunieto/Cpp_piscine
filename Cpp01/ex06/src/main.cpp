/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:52:42 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 12:15:51 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <string>



int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << " wrong number of inputs " << std::endl;
		return (0);
	}
	std::string input = argv[1];
	if (!input.length())
	{
		std::cout << "I did not heard you. Could you please repeat?  " << std::endl;
		return (0);
	}
	int complainLevel = levelComplain(input);
	expressComplain(complainLevel);
	return 0;
}