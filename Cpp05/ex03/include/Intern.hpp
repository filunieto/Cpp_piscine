/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:57:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/06/15 12:08:56 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>


class Intern
{
	private:

	public:
		Intern ();
		~Intern ();
		Intern (const  Intern &copy);

		Intern & operator=(const Intern &copy);
		AForm * makeForm(const std::string &nameForm , const std::string &targetForm );
};

#endif