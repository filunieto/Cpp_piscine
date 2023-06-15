/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:17 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/15 13:10:53 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/Intern.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include <unistd.h>

#define GREEN "\033[1;32m"
#define RESET "\033[0;37m"
#define RED "\033[31m"

// atexit(check_leaks);
void check_leaks(void)
{
	system("leaks Bureaucrat");
}

int main()
{

	Intern someRandomIntern;
	Bureaucrat chef("jefe", 1);
	
	{	
	std::cerr << GREEN << "\n- - - - - -Test 1 - - - - -" << RESET << std::endl;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("pantomimo", "Bender");
	std::cout << "created Form " << rrf << std::endl;
	delete rrf;
	}
	
	{	
	std::cerr << GREEN << "\n- - - - - -Test 2 - - - - -" << RESET << std::endl;
	AForm* rrf1;
	rrf1 = someRandomIntern.makeForm("Shrubbery", "Bender");
	std::cout << "created Form " << *rrf1 << std::endl;
	chef.signForm(*rrf1);
	rrf1->beSigned(chef);
	rrf1->Executed(chef);
	delete rrf1;
	}

	{	
	std::cerr << GREEN << "\n- - - - - -Test 3 - - - - -" << RESET << std::endl;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("Presidential", "Bender");
	std::cout << "created Form " << rrf << std::endl;
	delete rrf;
	}
	return 0;
}

