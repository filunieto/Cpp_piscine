/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:17 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/14 13:42:46 by fnieves          ###   ########.fr       */
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
	{	
		std::cout << GREEN << std::endl
				<< " 1). Test ShrubberyCreationForm" << WHITE << std::endl;
		try
		{
			Bureaucrat burPepe("Pepe", 148);
			Bureaucrat chief("Jefe", 1);
			Bureaucrat Ejecutor("Ejecutor", 10);
			Bureaucrat burUltimo; 
			ShrubberyCreationForm SForm1;  //no pangas parentesis
			ShrubberyCreationForm SForm2("target2"); //teng que añadir "override"?

			try
			{
				chief.signForm(SForm1);
				SForm1.Executed(Ejecutor); //it will create a file
				//std::cout << "ha tenido que firmarse un Form ShrubberyCreationForm, antes de una ecepcion en " << std::endl;

				//burUltimo.decrementGrade(); //puedo borrar
				burUltimo.signForm(SForm2);

			}
			catch(const  Bureaucrat::GradeMaximumException & e)
			{
				std::cerr << e.what() << '\n';
			}
			catch(const  Bureaucrat::GradeMinimumException & e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		catch(const std::exception& e)
		{
			std::cout << "The main catch (the last one) is executed." << std::endl;
			std::cerr << e.what() << '\n';
		}
	}

	{	
		std::cout << RED << std::endl
				<< " 2). Test ShrubberyCreationForm with another structure try-catch" << WHITE << std::endl;

		Bureaucrat burPepe("Pepe", 148);
		Bureaucrat burUltimo; //El Bureaucrat por defecto no es llamado
		ShrubberyCreationForm SForm1(); 
		ShrubberyCreationForm SForm2("target2"); //teng que añadir "override"?

		try
		{
			//burUltimo.decrementGrade(); //puedo borrar
			burPepe.decrementGrade();
			std::cout << "Burocrat burPepe" << burPepe << std::endl;
			std::cout << "Burocrat burUltimo" << burUltimo << std::endl;
			std::cout << "ShrubberyCreationForm SForm2" << SForm2 << std::endl;
			burUltimo.signForm(SForm2);
		}
		catch(const  Bureaucrat::GradeMaximumException & e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(const  Bureaucrat::GradeMinimumException & e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "The main catch (the last one) is executed." << std::endl;
			std::cerr << e.what() << '\n';
		}
	}
	{	
		std::cout << GREEN << std::endl
				<< " 3). Test RobotomyRequestForm" << WHITE << std::endl;
		try
		{
			Bureaucrat burPepe("Pepe", 6);
			RobotomyRequestForm RForm1; 
			RobotomyRequestForm RForm2("target R2"); //teng que añadir "override"?

			try
			{
				//std::cout << "RobotomyRequestForm RForm2" << RForm2 << std::endl;
				burPepe.signForm(RForm2);
				//std::cout << "RobotomyRequestForm RForm1" << RForm1 << std::endl;
				RForm2.Executed(burPepe);
				RForm1.Executed(burPepe); //se intenta ejecutar algo que no está firmado

				//std::cout << "RobotomyRequestForm RForm2" << RForm2 << std::endl;

			}
			catch(const  Bureaucrat::GradeMaximumException & e)
			{
				std::cerr << e.what() << '\n';
			}
			catch(const  Bureaucrat::GradeMinimumException & e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		catch(const std::exception& e) //recoge todas las excepciones padre, por defecto que no se hayan recogido antes
		{
			std::cout << "The main catch (the last one) is executed." << std::endl;
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}

