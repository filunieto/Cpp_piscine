/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:08:13 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/17 01:11:11 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp" 
#include <unistd.h>

# define GREEN	"\033[1;32m"
# define WHITE	"\033[0;37m"
# define RED	"\033[31m"



int main()
{

	try
	{	
		Bureaucrat Bureaucrat_default;
		Bureaucrat Bureaucrat_defaultCopy;
		Bureaucrat Bureaucrat_Pepe("Pepe", 25);
		Bureaucrat Bureaucrat_JuanOrigen("Juan", 1);
		std::cout << "Pepe al ppio: " << Bureaucrat_Pepe << std::endl;
		Bureaucrat Bureaucrat_Jose1("Jose1", 250);
		// Bureaucrat Bureaucrat_Jose2("Jose2", 0);
		Bureaucrat_Pepe.incrementGrade();
		std::cout << "Pepe despues de incremento ppio: " << Bureaucrat_Pepe << std::endl;
		Bureaucrat_defaultCopy = Bureaucrat_Pepe;
		std::cout << "Bureaucrat_defaultCopy: " << Bureaucrat_Pepe << std::endl;
		Bureaucrat Bureaucrat_Juan(Bureaucrat_JuanOrigen);
		std::cout << "Bureaucrat_Juan: " << Bureaucrat_Juan << std::endl;
	}
	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}



// int main()
// {
// 	std::cout << GREEN << std::endl << " 1). Test " << WHITE << std::endl;
// 	try
// 	{
// 		// Exceptions in constructor
// 		//Bureaucrat bur("Administrator", 0);
// 		//Bureaucrat bur("Administrator", 151);
// 		Bureaucrat bur("Administrator", 1);
// 		std::cout << bur << std::endl;

// 		bur.incrementGrade();
// 		std::cout << bur << std::endl;

// 		// bur.setGrade(1);
// 		// std::cout << bur << std::endl;

// 		// Exception while INcreasing
// 		//bur.increaseGrade();
// 		//std::cout << bur << std::endl;

// 		// bur.setGrade(149);
// 		// std::cout << bur << std::endl;

// 		bur.decrementGrade();
// 		std::cout << bur << std::endl;
		
// 		// Exception while DEcreasing
// 		bur.decrementGrade();
// 		std::cout << bur << std::endl;	
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	return 0;
// }
