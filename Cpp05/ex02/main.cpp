/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:17 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/06 22:14:28 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include <unistd.h>

#define GREEN "\033[1;32m"
#define WHITE "\033[0;37m"
#define RED "\033[31m"

int main()
{
	std::cout << GREEN << std::endl
			  << " 1). Test ShrubberyCreationForm" << WHITE << std::endl;

	return 0;
}



// int main ()
// {
// 	Bureaucrat Bur3();
// 	Bureaucrat Bur2("Bur2", 80);
// 	Bureaucrat Bur1("Bur1", 1);


// 	return 0;
// }