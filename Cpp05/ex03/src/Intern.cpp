/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:57:41 by fnieves           #+#    #+#             */
/*   Updated: 2023/06/15 12:41:38 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp" 

Intern::Intern ()
{
	std::cout << " Constructor default Intern called " << std::endl;
}

Intern::~Intern ()
{
	std::cout << " Destructor default Intern called " << std::endl;
}

Intern::Intern (const  Intern &copy)
{
	(void)copy;
	std::cout << " Constructor copy Intern called " << std::endl;
}

Intern & Intern::operator=(const Intern &copy)
{
	(void)copy;
	std::cout << " operator= Intern called " << std::endl;
	// if (this == &copy) //wouldnt be this safer?
	// 	return (*this);
	// return (copy); //not a possible returning value because is const
	//in this case as we have no atributes , we can just:
	return (*this);
}

AForm * Intern::makeForm(const std::string &nameForm , const std::string &targetForm )
{
	int i;
	std::string Formtype[3] = {"Robotomy", "Shrubbery", "Presidential"};
	for (i = 0; i < 3; i++)
	{
		if (nameForm == Formtype[i])
		{
			std::cout << "Intern made the form: " << nameForm << std::endl;
			break;
		}
	}
	switch (i)
	{
		case 0:
			return (new RobotomyRequestForm(targetForm));
		case 1:
			return (new ShrubberyCreationForm(targetForm));
		case 2:
			return (new PresidentialPardonForm(targetForm));
		default:
		{
			std::cout << "type form " << nameForm << " does not exist. Intern can ot work and will not be paid again :(" <<std::endl;
			return (NULL);
		}
	}
}

