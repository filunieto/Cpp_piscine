/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:57:19 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/08 12:34:24 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main()
{
	std::string var1 = "HI THIS IS BRAIN";
	std::string *stringPTR = &var1;
	std::string &stringREF = var1;
	std::cout << "memory address of the string variable: " << &var1 << std::endl;
	std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "The value of the string variable: " << var1 << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}