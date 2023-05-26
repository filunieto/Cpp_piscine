/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:17 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/25 22:56:43 by fnieves-         ###   ########.fr       */
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
	try
	{

		Bureaucrat bur("Administrator", 148);

		ShrubberyCreationForm Formula1("Form1", "target1");

		// try
		// {
		// 	// Exception no-sign formular
		// 	// bur.signForm(scForm);

		// 	// Exceptioin no-execution
		// 	// bur.executeForm(scForm);

		// 	bur.setGrade(10);
		// 	bur.signForm(scForm);
		// 	bur.executeForm(scForm);
		// }
		// catch (const Bureaucrat::unsig &e)
		// {
		// 	std::cout << RED << bur << " couldn’t sign " << scForm << " because " << e.what() << WHITE << std::endl;
		// }
		// catch (const Bureaucrat::NoExecutionSignException &e)
		// {
		// 	std::cout << RED << bur << " couldn’t execute " << scForm << " because " << e.what() << WHITE << std::endl;
		// }
		// catch (const Bureaucrat::NoExecutionGradeLowException &e)
		// {
		// 	std::cout << RED << bur << " couldn’t execute " << scForm << " because " << e.what() << WHITE << std::endl;
		// }
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << GREEN << std::endl
			  << " 2). Test RobotomyRequestForm" << WHITE << std::endl;
	// try
	// {
	// 	/***
	// 	 *
	// 	 * Bureaucrat Test
	// 	 *
	// 	 ***/
	// 	// Bureaucrat constructor
	// 	Bureaucrat bur("Administrator", 148);

	// 	/***
	// 	 *
	// 	 * ShrubberyCreationForm Test
	// 	 *
	// 	 ***/
	// 	// Form Constructor
	// 	RobotomyRequestForm scForm("FormularShrubberyEx02");

	// 	try
	// 	{
	// 		// Exception no-sign formular
	// 		// bur.signForm(scForm);

	// 		// Exceptioin no-execution
	// 		// bur.executeForm(scForm);

	// 		bur.setGrade(10);
	// 		bur.signForm(scForm);
	// 		bur.executeForm(scForm);
	// 	}
	// 	catch (const Bureaucrat::NoSignException &e)
	// 	{
	// 		std::cout << RED << bur << " couldn’t sign " << scForm << " because " << e.what() << WHITE << std::endl;
	// 	}
	// 	catch (const Bureaucrat::NoExecutionSignException &e)
	// 	{
	// 		std::cout << RED << bur << " couldn’t execute " << scForm << " because " << e.what() << WHITE << std::endl;
	// 	}
	// 	catch (const Bureaucrat::NoExecutionGradeLowException &e)
	// 	{
	// 		std::cout << RED << bur << " couldn’t execute " << scForm << " because " << e.what() << WHITE << std::endl;
	// 	}
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << GREEN << std::endl
	// 		  << " 3). Test PresidentialPardonForm" << WHITE << std::endl;
	// try
	// {
	// 	/***
	// 	 *
	// 	 * Bureaucrat Test
	// 	 *
	// 	 ***/
	// 	// Bureaucrat constructor
	// 	Bureaucrat bur("Administrator", 148);

	// 	/***
	// 	 *
	// 	 * ShrubberyCreationForm Test
	// 	 *
	// 	 ***/
	// 	// Form Constructor
	// 	PresidentialPardonForm scForm("FormularShrubberyEx02");

	// 	try
	// 	{
	// 		// Exception no-sign formular
	// 		// bur.signForm(scForm);

	// 		// Exceptioin no-execution
	// 		// bur.executeForm(scForm);

	// 		bur.setGrade(10);
	// 		bur.signForm(scForm);
	// 		bur.setGrade(4);
	// 		bur.executeForm(scForm);
	// 	}
	// 	catch (const Bureaucrat::NoSignException &e)
	// 	{
	// 		std::cout << RED << bur << " couldn’t sign " << scForm << " because " << e.what() << WHITE << std::endl;
	// 	}
	// 	catch (const Bureaucrat::NoExecutionSignException &e)
	// 	{
	// 		std::cout << RED << bur << " couldn’t execute " << scForm << " because " << e.what() << WHITE << std::endl;
	// 	}
	// 	catch (const Bureaucrat::NoExecutionGradeLowException &e)
	// 	{
	// 		std::cout << RED << bur << " couldn’t execute " << scForm << " because " << e.what() << WHITE << std::endl;
	// 	}
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	return 0;
}



// int main ()
// {
// 	Bureaucrat Bur3();
// 	Bureaucrat Bur2("Bur2", 80);
// 	Bureaucrat Bur1("Bur1", 1);


// 	return 0;
// }