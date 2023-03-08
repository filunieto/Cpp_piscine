/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:52:37 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 11:02:39 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void Harl::debug()
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

/**
 * @brief 
 * 
 
typedef void (Harl::*ptrComplainFunc[4])(void)
https://youtu.be/Go_mafBvnhk?t=447 
This is a member function of a class called Harl. 
The function takes a std::string parameter named level.

The purpose of this function is to call one of four other member functions of the same 
class based on the value of the level parameter. The function achieves this by creating an array 
ptrComplainFunc of function pointers that point to the other four member functions of the class. 
The ptrComplainFunc array is initialized in the function with the addresses of the four member functions,
debug(), info(), warning(), and error().
	// array  of function pointers that point to the other four member functions of the class.
	

The function then loops through the list array, which contains four 
strings {"DEBUG", "INFO", "WARNING", "ERROR"}. If the level parameter matches one of the strings 
in the list array, the function uses the function pointer array ptrComplainFunc to call the corresponding
 member function of the class.


Declaramos un array de punteros a funciones y lo inicializamos a la dirección de las funciones.
Como todas las  fucniones son del tipo void( f )void, podemos usar un solo array , si los inputs/outputs fueran diferentes ,
habría que declara tantos arrays comno tipo de funciones.
Preguntar a Ciro , sobre usar typedef con array de funciones (cómo se pone el array y el index en este typedef)

	// array  of function pointers that point to the other four member functions of the class.
	void (Harl::*ptrComplainFunc[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	typedef void (Harl::*ptrComplainFunc[4])(void);

*/

void	Harl::complain(std::string level)
{
	
	void (Harl::*ptrComplainFunc[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4)
	{
		if(!list[i].compare(level))
		{	
			(this->*ptrComplainFunc[i])();
			return ;
		}
		i++;
	}
	std::cout << "\033[7;38m There was an error \033[0m "<<std::endl;
}


Harl::Harl()
{	
	std::cout << "Class Harl constructed"<<std::endl;
}

Harl::~Harl()
{
	std::cout << "Class Harl destroyed"<<std::endl;	
}