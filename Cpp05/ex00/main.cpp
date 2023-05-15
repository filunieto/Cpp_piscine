/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:08:13 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/15 15:21:42 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp" 


int main()
{
	Bureaucrat Bureaucrat_default;
	Bureaucrat Bureaucrat_defaultCopy;
	Bureaucrat Bureaucrat_Pepe("Pepe", 25);
	Bureaucrat Bureaucrat_JuanOrigen("Juan", 1);
	std::cout << "Pepe al ppio: " << Bureaucrat_Pepe << std:endl;
	Bureaucrat Bureaucrat_Jose1("Jose1", 250);
	Bureaucrat Bureaucrat_Jose2("Jose2", 0);
	Bureaucrat_Pepe.incrementGrade();
	std::cout << "Pepe despues de incremento ppio: " << Bureaucrat_Pepe << std:endl;
	Bureaucrat_defaultCopy = Bureaucrat_Pepe;
	std::cout << "Bureaucrat_defaultCopy: " << Bureaucrat_Pepe << std:endl;
	Bureaucrat_Juan(Bureaucrat_JuanOrigen);
	std::cout << "Bureaucrat_Juan: " << Bureaucrat_Juan << std:endl;

	return 0;
}