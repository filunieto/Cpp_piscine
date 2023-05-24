/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:08:13 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/23 20:21:56 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"

#include <unistd.h>

# define GREEN	"\033[1;32m"
# define RESET	"\033[0;37m"
# define RED	"\033[31m"


int main()
{
	std::cout << GREEN << std::endl
			  << " 1). Test " << RESET << std::endl;
	try
	{
		Bureaucrat bur("Administrator", 100);
		std::cout << bur << std::endl;
		Form formular("FormularEx01", 15, 25);
		try
		{
			bur.signForm(formular);
		}
		catch (const Bureaucrat::GradeMinimumException &e)
		{
			std::cout << RED << bur << " couldn’t sign " << formular << " because " << e.what() << RESET << std::endl;
		}

		/***
		 *
		 * Form Test
		 *
		 ***/
		// Exception in constructor
		// Form formular("FormularEx01", 0, 25);
		// Form formular("FormularEx01", 1, 0);
		// Form formular("FormularEx01", 151, 1);
		// Form formular("FormularEx01", 1, 151);

		// Default constructor
		// Form formular;
		// Form Constructor
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return 0;
}

// int main()
// {

// 	try
// 	{	
// 		Bureaucrat Bureaucrat_default;
// 		Bureaucrat Bureaucrat_defaultCopy;
// 		Bureaucrat Bureaucrat_Pepe("Pepe", 25);
// 		Bureaucrat Bureaucrat_JuanOrigen("Juan", 1);
// 		std::cout << "Pepe al ppio: " << Bureaucrat_Pepe << std::endl;
// 		Bureaucrat Bureaucrat_Jose1("Jose1", 250);
// 		// Bureaucrat Bureaucrat_Jose2("Jose2", 0);
// 		Bureaucrat_Pepe.incrementGrade();
// 		std::cout << "Pepe despues de incremento ppio: " << Bureaucrat_Pepe << std::endl;
// 		Bureaucrat_defaultCopy = Bureaucrat_Pepe;
// 		std::cout << "Bureaucrat_defaultCopy: " << Bureaucrat_Pepe << std::endl;
// 		Bureaucrat Bureaucrat_Juan(Bureaucrat_JuanOrigen);
// 		std::cout << "Bureaucrat_Juan: " << Bureaucrat_Juan << std::endl;
// 	}
	
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	return 0;
// }


		// //Bureaucrat default Constructor
		// Bureaucrat bur1;

		// //Exceptions in constructor
		// Bureaucrat bur2("Administrator", 0);
		// Bureaucrat bur3("Administrator", 151);

		// bur.increaseGrade();
		// std::cout << bur << std::endl;

		// bur.setGrade(1);
		// std::cout << bur << std::endl;

		// Exception while INcreasing
		// bur.increaseGrade();
		// std::cout << bur << std::endl;

		// bur.setGrade(149);
		// std::cout << bur << std::endl;

		// bur.decreaseGrade();
		// std::cout << bur << std::endl;

		// Exception while DEcreasing
		// bur.decreaseGrade();
		// std::cout << bur << std::endl;
