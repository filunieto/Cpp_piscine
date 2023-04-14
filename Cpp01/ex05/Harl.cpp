/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:52:37 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/07 00:54:15 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup  \
	burger.  I really do!" << std::endl;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. \
	 You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. \
	 I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! \
	 I want to speak to the manager now." << std::endl;
}

/**
 * @brief 
 * 
typedef void (Harl::*pointToComplain[4])(void)

This is a member function of a class called Harl. 
The function takes a std::string parameter named level.

The purpose of this function is to call one of four other member functions of the same 
class based on the value of the level parameter. The function achieves this by creating an array 
pointToComplain of function pointers that point to the other four member functions of the class. 
The pointToComplain array is initialized in the function with the addresses of the four member functions,
debug(), info(), warning(), and error().

The function then loops through the list array, which contains four 
strings {"DEBUG", "INFO", "WARNING", "ERROR"}. If the level parameter matches one of the strings 
in the list array, the function uses the function pointer array pointToComplain to call the corresponding
 member function of the class.

If the level parameter does not match any of the strings in the list array, 
the function prints out a message indicating an error. The message is printed 
using std::cout and contains ANSI escape codes to set the console text color to white 
on a black background.

*/
void	Harl::complain(std::string level)
{
	void (Harl::*pointToComplain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (!list[i].compare(level))
		{
			(this->*pointToComplain[i])();
			return ;
		}
	}
	std::cout << "\033[7;38m[WTF?!]\033[0m "<<std::endl;
}


Harl::Harl()
{	
}

Harl::~Harl()
{	
}