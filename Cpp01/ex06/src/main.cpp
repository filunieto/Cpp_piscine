/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:52:42 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 11:13:15 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <string>

int levelComplain(std::string input)
{
	std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (!complains[i].compare(input))
		{
			
			return (i);
		}
		i++;
	}
	return (0);
}

void	expressComplain(int complainLevel)
{
	Harl harl;
	
	switch (complainLevel)
	{
	case 0:
		harl.complain("DEBUG");
		break;
	case 1:
		harl.complain("INFO");
		break;
	case 2:
		harl.complain("WARNING");
		break;
	case 3:
		harl.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

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